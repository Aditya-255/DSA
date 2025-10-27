#include<bits/stdc++.h>
#include<queue>
using namespace std;
class stackk{
	public:
		queue<int> q;
		void pushh(int x){
			int s=q.size();
			q.push(x);
			for(int i=1;i<=s;i++){
				q.push(q.front());
				q.pop();
			}
		}
		void popp(){
			return q.pop();
		}
		int topp(){
			return q.front();
		}
};
int main(){
	stackk st;
	st.pushh(10);
	st.pushh(5);
	st.pushh(18);
	cout<<st.topp()<<endl;
	
	st.popp();
	
	cout<<st.topp()<<endl;
}
