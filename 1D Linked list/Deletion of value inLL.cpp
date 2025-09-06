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
Node* Remove(Node* &head,int val){
	if(head==NULL){
		return head;
	}
	if(head->data==val){
		Node* temp=head;
		head=head->next;
		free(temp);
		return head;
	}
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL){
		if(temp->data==val){
			prev->next=prev->next->next;
			free(temp);
			break;
		}
		prev=temp;
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
	Node* t=head;
	while(t!=NULL){
		cout<<t->data<<" ";
		t=t->next;
	}
	cout<<endl;
	head=Remove(head,8);
	Node* t1=head;
	while(t1!=NULL){
		cout<<t1->data<<" ";
		t1=t1->next;
	}
}
