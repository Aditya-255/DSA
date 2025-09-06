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
Node* inspos(Node* &head,int k,int el){
	if(head==NULL){
		if(k==1){
			return new Node(el);
		}
		else{
			return NULL; 
		}
	}
	if(k==1){
		Node* temp=new Node(el);
		temp->next=head;
		head=temp;
		return head;
	}
	int cnt=0;
	Node* temp=head;
	while(temp!=NULL){
		cnt++;
		if(cnt==k-1){
			Node* t=new Node(el);
			t->next=temp->next;
			temp->next=t;
			break;
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
	head=inspos(head,3,5);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
