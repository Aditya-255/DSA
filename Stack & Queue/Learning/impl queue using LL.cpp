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
class queuee{
	public:
		Node* start=NULL;
		Node* end=NULL;
		int s=0;
		void pushh(int x){
			Node* temp=new Node(x);
			if(start==NULL){
				start=temp;
				end=temp;
			}
			else{
				end->next=temp;
			}
			s++;
		}
		void popp(){
			 if(start==NULL){
			 	return ;
			 }
			Node* temp=start;
			start=start->next;
			delete temp;
			s--;
		}
		int topp(){
			return start->data;
		}
		int sizee(){
			return s;
		}
};
int main(){
	queuee q;
	q.pushh(25);
	q.pushh(18);
	q.pushh(2);
	q.pushh(5);
	q.pushh(9);
	
	cout<<q.topp()<<" "<<q.sizee()<<endl;
	q.popp();
	cout<<q.topp()<<" "<<q.sizee()<<endl;
}
