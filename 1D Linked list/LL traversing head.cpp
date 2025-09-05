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
		move=move->next;
	}
	return head;
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(6);
	arr.push_back(8);
	Node* head=Convert(arr);
	cout<<head->data;
}
