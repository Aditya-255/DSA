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
Node* Conv(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* mover=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		mover->next=temp;
		mover=temp;
	}
	return head;
}
Node* delepos(Node* head,int k){
	if(head==NULL){
		return head;
	}
	if(k==1){
		Node* temp=head;
		head=head->next;
		free(temp);
		return head;
	}
	int c=0;
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL){
		c++;
		if(c==k){
			prev->next=prev->next->next;
			free(temp);
			break;
		}
		prev=temp;
		temp=temp->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(8);
	arr.push_back(7);
	Node* head=Conv(arr);
	int k=3;
	head=delepos(head,k);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
