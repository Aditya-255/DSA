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
Node* con(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* find(Node* head){
	Node* slow=head;
	Node* fast=head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
Node* merge(Node* lefthead,Node* righthead){
	Node* dummynode=new Node(-1);
	Node* temp=dummynode;
	while(lefthead!=NULL && righthead!=NULL){
		if(lefthead->data<righthead->data){
			temp->next=lefthead;
			temp=lefthead;
			lefthead=lefthead->next;
		}
		else{
			temp->next=righthead;
			temp=righthead;
			righthead=righthead->next;
		}
	}
	if(lefthead){
		temp->next=lefthead;
	}
	else{
		temp->next=righthead;
	}
	return dummynode->next;
}
Node* mergesort(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* midd=find(head);
	Node* lefthead=head;
	Node* righthead=midd->next;
	midd->next=NULL;
	lefthead=mergesort(lefthead);
	righthead=mergesort(righthead);
	
	return merge(lefthead,righthead);
}
int main(){
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(2); 
	arr.push_back(1);
	arr.push_back(5);
	Node* head=con(arr);
	head=mergesort(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
