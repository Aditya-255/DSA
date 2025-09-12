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
Node* remove(Node* head,int n){
	Node* fast=head;
	for(int i=0;i<n;i++){
		fast=fast->next;
	}
	if(fast==NULL){
		Node* newhead=head->next;
		free(head);
		return newhead;
	}
	Node* slow=head;
	while(fast->next!=NULL){
		slow=slow->next;
		fast=fast->next;
	}
	
	Node* delnode=slow->next;
	slow->next=slow->next->next;
	free(delnode);
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);	
	Node* head=con(arr);
	head=remove(head,5);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}
