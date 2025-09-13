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
Node* Sorting(Node* head){
	Node* temp=head;
	vector<int> abc;
	while(temp!=NULL){
		abc.push_back(temp->data);
		temp=temp->next;
	}
	sort(abc.begin(),abc.end());
	int i=0;
	temp=head;
	while(temp!=NULL){
		temp->data=abc[i];
		i++;
		temp=temp->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(5);
	Node* head=con(arr);
	head=Sorting(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
