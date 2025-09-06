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
Node* inslast(Node* &head,int val){
	Node* New=new Node(val);
	Node* temp=head;
	while(temp!=NULL){
		if(temp->next==NULL){
			temp->next=New;
			New->next=NULL;
			temp=New;
		}
		temp=temp->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(8);
	arr.push_back(9);
	arr.push_back(3);
	Node* head=Convert(arr);
	head=inslast(head,6);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
