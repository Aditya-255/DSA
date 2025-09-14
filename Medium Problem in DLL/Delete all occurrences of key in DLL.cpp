#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* back;
		Node(int d){
			data=d;
			next=NULL;
			back=NULL;
		}
};
Node* Convert(vector<int> arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		temp->back=move;
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* delocc(Node* head,int key){
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==key){
			if(temp==head){
				head=head->next;
			}
			Node* nextnode=temp->next;
			Node* prevnode=temp->back;
			if(nextnode!=NULL){
				nextnode->back=prevnode;
			}
			if(prevnode!=NULL){
				prevnode->next=nextnode;
			}
			delete temp;
			temp=nextnode;
		}
		else{
			temp=temp->next;
		}
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(10);
	arr.push_back(4);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(6);
	arr.push_back(10);
	Node* head=Convert(arr);
	int key=10;
	head=delocc(head,key);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
