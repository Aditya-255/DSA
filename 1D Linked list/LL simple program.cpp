#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		
	public:
		Node(int data1){
			data=data1;
			next= NULL;
		}
};
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(8);
	arr.push_back(7);

	Node* y=new Node(arr[0]);
	cout << y->data;  
}
