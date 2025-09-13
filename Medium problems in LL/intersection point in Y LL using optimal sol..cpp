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
Node* collision(Node* temp1,Node* temp2,int d){
	while(d){
		d--;
		temp2=temp2->next;
	}
	while(temp1!=temp2){
		temp1=temp1->next;
		temp2=temp2->next;
	}
	return temp1;
}
Node* inpoint(Node* head1,Node* head2){
	Node* t1=head1;
	Node* t2=head2;
	int n1=0,n2=0;
	while(t1!=NULL){
		n1++;
		t1=t1->next;
	}
	while(t2!=NULL){
		n2++;
		t2=t2->next;
	}
	if(n1<n2){
		return collision(head1,head2,n2-n1);
	}
	else{
		return collision(head2,head1,n1-n2);
	}
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
    Node* ans=inpoint(head1,head2);
    cout<<ans->data<<endl;
    
}
