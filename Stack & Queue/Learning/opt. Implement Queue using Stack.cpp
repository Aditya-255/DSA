#include<bits/stdc++.h>
using namespace std;
class queuee{
	public:
		stack<int> s1,s2;
		void pushh(int x){
			s1.push(x);
		}
		void popp(){
			if(!s2.empty()){
				s2.pop();
			}
			else{
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
				s2.pop();
			}
		}
		int topp(){
			if(!s2.empty()){
				return s2.top();
			}
			else{
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
				return s2.top();
			}
		}
		
};
int main(){
	queuee q;
	q.pushh(2);
	q.pushh(4);
	q.pushh(4);
	q.pushh(5);
	cout<<q.topp()<<endl;
	q.popp();
	q.pushh(1);
	q.popp();
	q.popp();
	q.popp();
	cout<<q.topp()<<endl;
	q.popp();
}
