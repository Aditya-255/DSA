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
Node* inshead(Node* head,int val){
	Node* temp=new Node(val);
	head->back=temp;
	temp->back=NULL;
	temp->next=head;
	head=temp;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(4);
	Node* head=Convert(arr);
	head=inshead(head,5);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
