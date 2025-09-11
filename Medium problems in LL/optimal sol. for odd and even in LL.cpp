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
Node* oddeven1(Node* head){ 
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* odd=head;
	Node* even=head->next;
	Node* evenhead=head->next;
	while(even!=NULL && even->next!=NULL){
		odd->next=odd->next->next;
		even->next=even->next->next;
		odd=odd->next;
		even=even->next;
	}
	odd->next=evenhead;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(6);
	Node* head=con(arr);
	head=oddeven1(head);
	Node* temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
