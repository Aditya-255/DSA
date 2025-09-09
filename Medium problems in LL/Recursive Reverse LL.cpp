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
Node* Convert(vector<int> &arr){
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
int main(){
	vector<int> arr;
	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(1);
	Node* head=Convert(arr);
	head=revvv(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next; 
	}
}
