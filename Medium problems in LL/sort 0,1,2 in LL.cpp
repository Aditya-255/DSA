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
Node* sort012s(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* zerohead=new Node(-1);
	Node* onehead=new Node(-1);
	Node* twohead=new Node(-1);
	Node* zero=zerohead;
	Node* one=onehead;
	Node* two=twohead;
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==0){
			zero->next=temp;
			zero=temp;
		}
		else if(temp->data==1){
			one->next=temp;
			one=temp;
		}
		else{
			two->next=temp;
			two=temp;
		}
		temp=temp->next;
	}
	if(onehead->next!=NULL){
		zero->next=onehead->next;
	}
	else{
		zero->next=twohead->next;
	}
	one->next=twohead->next;
	two->next=NULL;
	head=zerohead->next;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(0);
	arr.push_back(2);
	arr.push_back(1);
	Node* head=con(arr);
	head=sort012s(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
