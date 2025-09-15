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
Node* Convert(vector<int> arr){
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
vector<pair<int,int> > solve(Node* head,int sum){
	Node* left=head;
	Node* right=head;
	while(right->next!=NULL){
		right=right->next;
	}
	vector<pair<int,int> > ans;
	while(left->data<right->data){
		if(left->data+right->data==sum){
			ans.push_back({left->data,right->data});
			left=left->next;
			right=right->back;
		}
		else if(left->data+right->data<sum){
			left=left->next;
		}
		else{
			right=right->back;
		}
	}
	if (ans.empty()) {
        vector<pair<int,int> > temp;
        temp.push_back(make_pair(-1,-1));
        return temp;
    }
	return ans;
}
int main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	arr.push_back(9);
	Node* head=Convert(arr);
	
	int sum=5;
	vector<pair<int,int> > res=solve(head,sum);
	for(int i=0;i<res.size();i++){
		cout<<"("<<res[i].first<<","<<res[i].second<<")"<<endl;
	}
}
