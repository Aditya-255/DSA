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
Node* solve(Node* head1,Node* head2){
	if(head1==NULL || head2==NULL){
		return NULL;
	}
	Node* t1=head1;
	Node* t2=head2;
	while(t1!=t2){
		t1=t1->next;
		t2=t2->next;
		if(t1==t2){
			return t1;
		}
		if(t1==NULL){
			t1=head2;
		}
		if(t2==NULL){
			t2=head1;
		}
	}
	return t1;
}
int main(){
	Node* common = new Node(4);
    common->next = new Node(6);
    common->next->next = new Node(6);
    
    Node* head1 = new Node(3);
    head1->next = new Node(1);
    head1->next->next = common; 

    Node* head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(4);
    head2->next->next->next = new Node(5);
    head2->next->next->next->next = common;
    
    Node* ans=solve(head1,head2);
    cout<<ans->data<<endl;
}
