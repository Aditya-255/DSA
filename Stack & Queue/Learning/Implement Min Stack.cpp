#include<bits/stdc++.h>
using namespace std;
class stackk{
	public:
		stack<pair<int,int> > st;
		void pushh(int x){
			if(st.empty()){
				st.push({x,x});
			}
			else{
				st.push({x,min(x,st.top().second)});
			}
		}
		int getmin(){
			return st.top().second;
		}
		int topp(){
			return st.top().first;
		}
};
int main(){
	stackk s;
	s.pushh(5);
	s.pushh(3);
	s.pushh(4);
	cout<<s.getmin()<<endl;
	
}
