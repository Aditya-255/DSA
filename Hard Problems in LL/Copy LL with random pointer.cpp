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

Node* solve(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		Node* copy=new Node(temp->data);
		copy->next=temp->next;
		temp->next=copy;
		temp=temp->next->next;
	}
	temp=head;
	while(temp!=NULL){
		Node* copy=temp->next;
		if(temp->random){
			copy->random=temp->random->next;
		}
		temp=temp->next->next;
	}
	Node* dummy=new Node(-1);
	Node* res=dummy;
	temp=head;
	while(temp!=NULL){
		res->next=temp->next;
		temp->next=temp->next->next;
		res=res->next;
		temp=temp->next;
	}
	return dummy->next;
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
    head=solve(head);
    Node* temp=head;
    while(temp!=NULL){
    	cout<<temp->data<<" ";
    	temp=temp->next;
	}
}
