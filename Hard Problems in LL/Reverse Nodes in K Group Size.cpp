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
Node* find(Node* temp,int k){
	k=k-1;
	while(temp!=NULL && k>0){
		k--;
		temp=temp->next;
	}
	return temp;
}
Node* group(Node* head,int k){
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL){
		Node* knode=find(temp,k);
		if(knode==NULL){
			if(prev){
				prev->next=temp;
			}
			break;
		}
		Node* nextnode=knode->next;
		knode->next=NULL;
		reverse(temp);
		if(temp==head){
			head=knode;
		}
		else{
			prev->next=knode;
		}
		prev=temp;
		temp=nextnode;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(5);
	arr.push_back(6);
	arr.push_back(7);
	arr.push_back(8);
	arr.push_back(9);
	arr.push_back(10);
	Node* head=Convert(arr);
	int k=3;
	head=group(head,k);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
