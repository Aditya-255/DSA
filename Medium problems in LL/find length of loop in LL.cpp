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
int len(Node* head){
	map<Node*,int> mpp;
	Node* temp=head;
	int t=1;
	int val=0;
	while(temp!=NULL){
		if(mpp.find(temp)!=mpp.end()){
			val=mpp[temp];
			return t-val;
		}
		mpp[temp]=t;
		t++;
		temp=temp->next;
		
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
    
    int ans=len(head);
    cout<<ans<<endl;
}
