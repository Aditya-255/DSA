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
Node* Conv(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* mover=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		mover->next=temp;
		mover=temp;
	}
	return head;
}
Node* deletail(Node* head){
	Node* temp=head;
	if(head==NULL || head->next==NULL) {
		return NULL;
	}
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	return temp;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	Node* head=Conv(arr);
	Node* ans=deletail(head);
	cout<<ans->data<<endl;	
	
}
