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
Node* delmid(Node* head){
	Node* temp=head;
	int n=0;
	while(temp!=NULL){
		n++;
		temp=temp->next;
	}
	int res=n/2;
	temp=head;
	while(temp!=NULL){
		res--;
		if(res==0){
			break;
		}
		temp=temp->next;
	}
	Node* del=temp->next;
	temp->next=temp->next->next;
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
	head=delmid(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
