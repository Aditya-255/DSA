#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		
	public:
		Node(int data1){
			data=data1;
			next= NULL;
		}
};
Node* Convert(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=move->next;
	}
	return head;
}
int len(Node* head){
	int c=0;
	Node* temp=head;
	while(temp!=NULL){
		c++;
		temp=temp->next;
	}
	return c;
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(8);
	arr.push_back(7);
	Node* head=Convert(arr);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	cout<<len(head)<<endl;
}
