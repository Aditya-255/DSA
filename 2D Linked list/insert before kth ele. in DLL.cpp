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
Node* Convert(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* prev=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		temp->next=NULL;
		temp->back=prev;
		prev->next=temp;
		prev=temp;
	}
	return head;
}
Node* inskthele(Node* head,int k,int val){
	if(k==1){
		Node* temp=new Node(val);
		temp->next=head;
		head->back=temp;
		head=temp;
		return head;
	}
	Node* temp=head;
	int cnt=0;
	while(temp!=NULL){
		cnt++;
		if(cnt==k){
			break;
		}
		temp=temp->next;
	}
	Node* prev=temp->back;
	Node* newnode=new Node(val);
	newnode->back=prev;
	newnode->next=temp;
	temp->back=newnode;
	prev->next=newnode;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(4);
	Node* head=Convert(arr);
	head=inskthele(head,3,5);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next; 
	}
}
