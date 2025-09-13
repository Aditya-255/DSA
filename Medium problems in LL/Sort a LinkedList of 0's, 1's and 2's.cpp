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
Node* con(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* sort012(Node* head){
	int cnt0=0,cnt1=0,cnt2=0;
	Node* temp=head;
	while(temp!=NULL){
		if(temp->data==0){
			cnt0++;
			temp=temp->next;
		}
		else if(temp->data==1){
			cnt1++;
			temp=temp->next;
		}
		else{
			cnt2++;
			temp=temp->next;
		}
	}
	temp=head;
	while(temp!=NULL){
		if(cnt0){
			temp->data=0;
			cnt0--;
		}
		else if(cnt1){
			temp->data=1;
			cnt1--;
		}
		else{
			temp->data=2;
			cnt2--;
		}
		temp=temp->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(0);
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(0);
	arr.push_back(2);
	arr.push_back(1);
	Node* head=con(arr);
	head=sort012(head);
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
