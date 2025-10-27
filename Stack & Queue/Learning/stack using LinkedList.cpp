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
class stackk{
	Node* top;
	int s=0;
	public:
	void pushh(int x){
		Node* temp=new Node(x);
		temp->next=top;
		top=temp;
		s=s+1;
	}
	void popp(){
		Node* temp=top;
		top=top->next;
		delete temp;
		s=s-1;
	}
	int topp(){
		return top->data;
	}
	int sizee(){
		return s;
	}
};
int main(){
	stackk s;
	s.pushh(5);
	s.pushh(4);
	s.pushh(3);
	s.pushh(2);
	cout<<s.topp()<<endl;
	cout<<s.sizee()<<endl;
	s.popp();
	cout<<s.topp()<<endl;
	cout<<s.sizee()<<endl;
}
