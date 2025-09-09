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
bool looped(Node*head){
	map<Node*,int> mpp;
	Node* temp=head;
	while(temp!=NULL){
		if(mpp.find(temp)!=mpp.end()){
			return true;
		}
		mpp[temp]=1;
		temp=temp->next;
	}
	return false;
}
int main(){
	Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head->next->next->next->next->next = head->next;

//	while(temp!=NULL){  infinite loop
//		cout<<temp->data<<" ";
//		temp=temp->next;
//	}
if (looped(head))
        cout << "Loop detected" << endl;
    else
        cout << "No loop" << endl;
}
