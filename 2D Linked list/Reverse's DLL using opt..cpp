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
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		temp->back=move;
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* reverse(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* last=NULL;
	Node* cur=head;
	while(cur!=NULL){
		last=cur->back;
		cur->back=cur->next;
		cur->next=last;
		cur=cur->back;
	}
	head=last->back;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(3); 
	arr.push_back(1);
	Node* head=Convert(arr);
	head=reverse(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
