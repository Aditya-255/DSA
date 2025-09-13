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
Node* intersection(Node* common,Node* head1,Node* head2){
	map<Node*,int> mpp;
	Node* temp=head1;
	while(temp!=NULL){
		mpp[temp]=1;
		temp=temp->next;
	}
	temp=head2;
	while(temp!=NULL){
		if(mpp.find(temp)!=mpp.end()){
			return temp;
		}
		temp=temp->next;
	}
	return NULL;
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
    
    Node* ans=intersection(common,head1,head2);
    cout<<ans->data<<endl;
}
