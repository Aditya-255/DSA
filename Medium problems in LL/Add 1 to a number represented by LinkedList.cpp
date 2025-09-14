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
Node* revvv(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* newhead=revvv(head->next);
	Node* front=head->next;
	front->next=head;
	head->next=NULL;
	return newhead;
} 
Node* add1(Node* head){
	head=revvv(head);	
	Node* temp=head;
	int carry=1;
	while(temp!=NULL){
		temp->data=temp->data+carry;
		if(temp->data<10){
			carry =0;
			break;
		}
		else{
			temp->data=0;
			carry=1;
		}
		temp=temp->next;
	}
	if(carry==1){
		Node* newnode=new Node(1);
		head=revvv(head);
		newnode->next=head;
		return newnode;
	}
	head=revvv(head);
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(9);
	Node* head=con(arr);
	head=add1(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
