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
Node* remove(Node* head){
	Node* temp=head;
	Node* nextnode=temp->next;
	while(temp != NULL &&temp->next!=NULL){
		if(temp->data==nextnode->data){
			Node* dup=nextnode;
			delete dup;
			nextnode=nextnode->next;
		}
		else{
			temp->next=nextnode;
			nextnode->back=temp;
			temp=nextnode;
		}	
	}
	return head;
}
Node* remove1(Node* head){
	Node* temp=head;
	
	while(temp != NULL && temp->next!=NULL){
		Node* nextnode=temp->next;
		while(nextnode!=NULL && nextnode->data==temp->data){
			Node* dup=nextnode;
			delete dup;
			nextnode=nextnode->next;
		}	
		temp->next=nextnode;
		if(nextnode){
			nextnode->back=temp;
		}
		temp=temp->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(3);
	arr.push_back(4);
	Node* head=Convert(arr);
	head=remove1(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
