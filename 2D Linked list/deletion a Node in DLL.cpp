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
void deletenode(Node* temp){
	Node* prev=temp->back;
	Node* front=temp->next;
	if(front==NULL){
		prev->next=NULL;
		temp->back=NULL;
		delete temp;
		return ;
	}
	prev->next=front;
	front->back=prev;
	temp->next=NULL;
	temp->back=NULL;
	delete temp;
	return ;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(4);
	Node* head=Convert(arr);
	deletenode(head->next->next);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
