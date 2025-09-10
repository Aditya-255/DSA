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
Node* start(Node* head){
	Node* temp=head;
	map<Node*,int> mpp;
	while(temp!=NULL){
		if(mpp.find(temp)!=mpp.end()){
			return temp;
		}
		mpp[temp]=1;
		temp=temp->next;
	}
	return NULL;
}
int main(){
	Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head->next;
    
    Node* ans=start(head);
    cout<<ans->data<<endl;
}
