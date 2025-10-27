#include<bits/stdc++.h>
using namespace std;
class qimp{
	int size=4;
	int q[4];
	int currsize=0;
	int st=-1,en=-1;
	public:
		void pushh(int x){
			if(currsize==size){
				cout<<"queue is overflow"<<endl;
				return ;
			}
			if(currsize==0){
				st=0,en=0;
			}
			else{
				en=(en+1)%size;
			}
			q[en]=x;
			currsize++;
		}
		void popp(){
			if(currsize==0){
				cout<<"queue is empty"<<endl;
				return ;
			}
			int b=q[st];
			if(currsize==1){
				st=en=1;
			}
			else{
				st=(st+1)%size;
			}
			currsize-=1;
			return ;
		}
		int topp(){
			if(currsize==0){
				return -1;
			}
			return q[st];
		}
		int sizee(){
			return currsize;
		}
};
int main(){
	qimp q;
	q.pushh(5);
	q.pushh(4);
	q.pushh(3);
	cout<<q.topp()<<" "<<q.sizee()<<endl;
	q.popp();
	cout<<q.topp()<<" "<<q.sizee()<<endl;
}
