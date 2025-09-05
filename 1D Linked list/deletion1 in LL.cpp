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
Node* delehead(Node* head){
	Node* temp=head;
	head=head->next;
	free(temp);
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	Node* head=Conv(arr);
	cout<<head->data<<endl;
	head=delehead(head);
	cout<<head->data<<endl;
}
