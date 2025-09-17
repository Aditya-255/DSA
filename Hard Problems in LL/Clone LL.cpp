#include<bits/stdc++.h>
using namespace std;
class Node {
	public:
	    int data;
	    Node* next;
	    Node* random;
	    Node(int d){
	    	data=d;
	    	next=NULL;
	    	random=NULL;
		}    
};
Node* fun(Node* head){
	Node* temp=head;
	map<Node*,Node*> mpp; 
	while(temp!=NULL){
		Node* newnode=new Node(temp->data);
		mpp[temp]=newnode;
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		Node* copy=mpp[temp];
		copy->next=mpp[temp->next];
		copy->random=mpp[temp->random];
		temp=temp->next;
	}
	return mpp[head];
}
int main(){
	    Node* n1 = new Node(7);
    Node* n2 = new Node(13);
    Node* n3 = new Node(11);
    Node* n4 = new Node(10);
    Node* n5 = new Node(1);

    n1->next = n2; n2->next = n3; n3->next = n4; n4->next = n5;

    n1->random = NULL;
    n2->random = n1;
    n3->random = n5;
    n4->random = n3;
    n5->random = n1;
    Node* head=n1;
    head=fun(head);
    Node* temp=head;
    while(temp!=NULL){
    	cout<<temp->data<<" ";
    	temp=temp->next;
	}
    
}
