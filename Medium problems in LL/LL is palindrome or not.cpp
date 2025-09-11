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
bool check(Node* head){
	stack<int> st;
	Node* temp=head;
	while(temp!=NULL){
		st.push(temp->data);
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(temp->data!=st.top()){
			return false;
		}
		temp=temp->next;
		st.pop();
	}
	return true;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(1);
	Node* head=con(arr);
	Node* temp=head;
	if(check(head)){
		cout<<"palindrome"<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}
	
}
