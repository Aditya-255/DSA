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
Node* Convert(vector<int> ans){
	if(ans.size()==0){
		return NULL;
	}
	Node* head=new Node(ans[0]);
	Node* temp=head;
	for(int i=1;i<ans.size();i++){
		Node* newnode=new Node(ans[i]);
		temp->bottom=newnode;
		temp=temp->bottom;
	}
	return head;
}
Node* solve(Node* head){
	Node* temp=head;
	vector<int> ans;
	while(temp!=NULL){
		Node* t=temp;
		while(t!=NULL){
			ans.push_back(t->data);
			t=t->bottom;
		}
		temp=temp->next;
	}
	sort(ans.begin(),ans.end());
	head=Convert(ans);
	return head;
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
