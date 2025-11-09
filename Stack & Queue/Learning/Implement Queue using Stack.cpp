#include<bits/stdc++.h>
using namespace std;
class queuee{
	public:
		stack<int> s1,s2;
		void pushh(int x){
			while(s1.size()){
				s2.push(s1.top());
				s1.pop();
			}
			s1.push(x);
			while(s2.size()){
				s1.push(s2.top());
				s2.pop();
			}
		}
		void popp(){
			s1.pop();
		}
		int topp(){
			return s1.top();
		}
};
int main(){
	queuee q;
	q.pushh(3);
	q.pushh(2);
	q.pushh(1);	
	cout<<q.topp()<<endl;
	
	q.popp();
	
	cout<<q.topp()<<endl;
}
