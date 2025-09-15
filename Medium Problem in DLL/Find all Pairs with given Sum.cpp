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
vector<pair<int,int> > pairs(Node* head,int sum){
	Node* temp1=head;
	vector<pair<int,int> > ans;
	while(temp1!=NULL){
		Node* temp2=temp1->next;
		while(temp2!=NULL && temp1->data+temp2->data<=sum){
			if(temp1->data+temp2->data==sum){
				ans.push_back({temp1->data,temp2->data});	
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
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
	vector<pair<int,int> > res=pairs(head,sum);
	for(int i=0;i<res.size();i++){
		cout<<"("<<res[i].first<<","<<res[i].second<<")"<<endl;
	}
	
}
