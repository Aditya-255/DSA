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
Node* con(vector<int> arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=temp;
	}
	return head;
}
int help(Node* temp){
	if(temp==NULL){
		return 1;
	}
	int carry=help(temp->next);
	temp->data=temp->data+carry;
	if(temp->data<10){
		return 0;
	}
	temp->data=0;
	return 1;
}
Node* solve(Node* head){
	int carry=help(head);
	if(carry==1){
		Node* newnode=new Node(1);
		newnode->next=head;
		return newnode;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(9);
	Node* head=con(arr);
	head=solve(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
