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
Node* Convert(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* solve(Node* head1,Node* head2){
	Node* t1=head1;
	Node* t2=head2;
	Node* dummynode=new Node(-1);
	Node* curr=dummynode;
	int carry=0;
	while(t1!=NULL || t2!=NULL){
		int sum=carry;
		if(t1){
			sum=sum+t1->data;
		}
		if(t2){
			sum=sum+t2->data;
		}
		Node* newnode=new Node(sum%10);
		carry=sum/10;
		curr->next=newnode;
		curr=curr->next;
		if(t1){
			t1=t1->next;
		}
		if(t2){
			t2=t2->next;
		}
	}
	if(carry){
		Node* newnode=new Node(carry);
		curr->next=newnode;
	}
	return dummynode->next;
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(4);
	arr.push_back(6);
	
	vector<int> arr1;
	arr1.push_back(3);
	arr1.push_back(8);
	arr1.push_back(7);
	
	Node* head1=Convert(arr);
	Node* head2=Convert(arr1);
	Node* ans=solve(head1,head2);
	while(ans!=NULL){
		cout<<ans->data<<" ";
		ans=ans->next;
	}
}
