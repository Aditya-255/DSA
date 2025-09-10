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
int findlen(Node* slow,Node* fast){
	int cnt=1;
	fast=fast->next;
	while(slow!=fast){
		cnt++;
		fast=fast->next;
	}
	return cnt;
}
int length(Node* head){
	Node* slow=head;
	Node* fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return findlen(slow,fast);
		}
	}
	return 0;
}
int main(){
	Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head->next->next;
    
    int ans=length(head);
    cout<<ans<<endl;
}
