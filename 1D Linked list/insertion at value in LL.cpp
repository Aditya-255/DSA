#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int d){
			data=d;
			next=NULL;
		} 
};
Node* Convert(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* insbefore(Node* head,int el,int val){
	if(head==NULL){
		return NULL;
	}
	if(head->data==val){
		Node* temp=new Node(val);
		temp->next=head;
		head=temp;
		return head; 
	}
	Node* temp=head;
	while(temp->next!=NULL){
		if(temp->next->data==el){
			Node* New=new Node(val);
			New->next=temp->next;
			temp->next=New;
			break;
		}
		temp=temp->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(8);
	arr.push_back(9);
	arr.push_back(3);
	Node* head=Convert(arr);
	head=insbefore(head,9,5);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
} 
