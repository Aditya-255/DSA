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
Node* deletemid(Node* head){
	if(head==NULL || head->next==NULL){
		return NULL;
	}
	Node* slow=head;
	Node* fast=head;
	fast=fast->next->next;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	Node* del=slow->next;
	slow->next=slow->next->next;
	free(del);
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
	head=deletemid(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
