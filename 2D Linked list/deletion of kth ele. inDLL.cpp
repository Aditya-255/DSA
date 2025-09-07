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
Node* kthel(Node* head,int k){
	if(head==NULL){
		return NULL;
	}
	Node* temp=head;
	int cnt=0;
	while(temp!=NULL){
		cnt++;
		if(cnt==k){
			break;	
		}
		else{
			temp=temp->next;
		}
	}
	Node* prev=temp->back;
	Node* front=temp->next;
	if(prev==NULL && front==NULL){
		delete temp;
		return NULL;
	}
	else if(prev==NULL){
		Node* head=temp->next;
		temp->next=NULL;
		delete temp;
		return head;
	}
	else if(front==NULL){
		temp->back=NULL;
		prev->next=NULL;
		delete temp;
		return head;
	}
	prev->next=front;
	front->back=prev;
	temp->next=NULL;
	temp->back=NULL;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(4);
	Node* head=Convert(arr);
	head=kthel(head,1);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
