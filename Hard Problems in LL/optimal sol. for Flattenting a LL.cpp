#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		 Node* bottom;  
		Node(int d){
			data=d;
			next=NULL;
			bottom=NULL;
		}
};
Node* merge(Node* l1,Node* l2){
	Node* dummy=new Node(-1);
	Node* res=dummy;
	while(l1!=NULL && l2!=NULL){
		if(l1->data<l2->data){
			res->bottom=l1;
			res=l1;
			l1=l1->bottom;
		}
		else{
			res->bottom=l2;
			res=l2;
			l2=l2->bottom;
		}
		res->next=NULL;
	}
	if(l1){
		res->bottom=l1;
	}
	else{
		res->bottom=l2;
	}
	
	return dummy->bottom;
}
Node* solve(Node* head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* mergehead=solve(head->next);
	return merge(head,mergehead);
}
int main(){
	Node* head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);
    
    head=solve(head);
    Node* temp=head;
    while(temp!=NULL){
    	cout<<temp->data<<" ";
    	temp=temp->bottom;
	}
}
