#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node* back;
		Node(int d){
			data=d;
			next=NULL;
			back=NULL;
		}
};
Node* Convert(vector<int> &arr){
	Node* head=new Node(arr[0]);
	Node* move=head;
	for(int i=1;i<arr.size();i++){
		Node* temp=new Node(arr[i]);
		temp->back=move;
		move->next=temp;
		move=temp;
	}
	return head;
}
Node* middle(Node* head){
	Node* temp=head;
	int cnt=0;
	while(temp!=NULL){
		cnt++;
		temp=temp->next;
	}
	int mid=(cnt/2)+1;
	temp=head;
	while(temp!=NULL){
		mid=mid-1;
		if(mid==0){
			return temp;
		}
		temp=temp->next;
	}
	return temp;
}
int main(){
	vector<int> arr;
	arr.push_back(4);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(1);
	Node* head=Convert(arr);
	Node* ans=middle(head);
	cout<<ans->data<<endl;
}
