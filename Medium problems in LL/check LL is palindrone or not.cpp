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
Node* reverse(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* newhead=reverse(head->next);
	Node* front=head->next;
	front->next=head;
	head->next=NULL;
	return newhead;
}
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
bool check1(Node* head){
	Node* slow=head;
	Node* fast=head;
	while(fast->next!=NULL && fast->next->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	Node* newhead=reverse(slow->next);
	Node* first=head;
	Node* second=newhead;
	while(second!=NULL){
		if(first->data!=second->data){
			reverse(newhead);
			return false;
		}
		first=first->next;
		second=second->next;
	}
	reverse(newhead);
	return true;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(1);
	Node* head=con(arr);
	Node* temp=head;
	if(check1(head)){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
}
