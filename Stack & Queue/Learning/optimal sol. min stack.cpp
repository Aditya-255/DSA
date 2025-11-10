#include<bits/stdc++.h>
using namespace std;
class minstack{
	public:
		stack<int> st;
		int mini=INT_MAX;
		void pushh(int x){
			if(st.empty()){
				mini=x;
				st.push(x);
			}
			else{
				if(x>mini){
					st.push(x);
				}
				else{
					st.push((2*x)-mini);
					mini=x;
				}
			}
		}
		void popp(){
			int a=st.top();
			st.pop();
			if(a<mini){
				mini=(2*mini)-a;
			}
		}
		int topp(){
			int b=st.top();
			if(mini<b){
				return b;
			}
			return mini;
		}
		int gemin(){
			return mini;
		}
};
int main(){
	minstack s;
	s.pushh(5);
	s.pushh(4);
	s.pushh(6);
	cout<<s.gemin()<<endl;
	cout<<s.topp()<<endl;
}
