#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
		Node* prev;
		Node(int k,int d){
			key=k;
			data=d;
			next=NULL;
			prev=NULL;
		}
};
class LRU{
	public:
		map<int, Node*> mpp;
		int capacity;
		Node* head;
		Node* tail;
		LRU(int cap){
			capacity=cap;
			mpp.clear();
			head=new Node(0,0);
			tail=new Node(0,0);
			head->next=tail;
			tail->prev=head;
		}
		void deletenode(Node* node){
			Node* prevv=node->prev;
			Node* nextt=node->next;
			
			prevv->next=nextt;
			nextt->prev=prevv;
		}
		void insertafhead(Node* node){
			Node* temp=head->next;
			node->next=temp;
			node->prev=head;
			head->next=node;
			temp->prev=node;
		}
		int get(int key){
			if(mpp.find(key)==mpp.end()){
				return -1;
			}
			Node* node=mpp[key];
			deletenode(node);
			insertafhead(node);
			return node->data;
		}
		void put(int key,int val){
			if(mpp.find(key)!=mpp.end()){
				Node* node=mpp[key];
				node->data=val;
				deletenode(node);
				insertafhead(node);
			}
			else{
				if(mpp.size()==capacity){
					Node* last=tail->prev;
					mpp.erase(last->key);
					deletenode(last);
					delete last;
				}
				Node* newNode=new Node(key,val);
				mpp[key]=newNode;
				insertafhead(newNode);
			}
		}
};
int main(){
	LRU c(2);
	c.put(1,10);
	c.put(2,20);
	cout<<c.get(1)<<endl;
	c.put(3,30);
	cout<<c.get(2)<<endl;
	c.put(4,40);
	cout<<c.get(1)<<endl;
	cout<<c.get(3)<<endl;
	cout<<c.get(4)<<endl;
}
