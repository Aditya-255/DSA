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
Node* Convert(vector<int> arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* find(Node* temp,int k){
	int cnt=1;
	while(temp!=NULL){
		if(cnt==k){
			return temp;
		}
		cnt++;
		temp=temp->next;
	}
	return temp;
}
Node* Rotate(Node* head,int k){
	if(head==NULL || k==0){
		return head;
	}
	Node* tail=head;
	int len=1;
	while(tail->next!=NULL){
		len++;
		tail=tail->next;
	}
	if(k%len==0){
		return head;
	}
	k=k%len;
	tail->next=head;
	Node* newnode=find(head,len-k);
	head=newnode->next;
	newnode->next=NULL;
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	Node* head=Convert(arr);
	int k=2;
	head=Rotate(head,k);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
