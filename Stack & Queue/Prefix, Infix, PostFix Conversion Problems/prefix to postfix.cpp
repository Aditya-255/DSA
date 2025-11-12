#include<bits/stdc++.h>
using namespace std;
string posttopre(string s){
	int i=s.length()-1;
	stack<string> st;
	while(i>=0){
		if((s[i]>='A'&&s[i]<='Z')
		|| (s[i]>='a'&&s[i]<='z')
		|| (s[i]>='0' &&s[i]<='9')){
			string temp(1,s[i]);
			st.push(temp);
		}
		else{
			string t1=st.top();
			st.pop();
			string t2=st.top();
			st.pop();
			st.push(t1+t2+s[i]);
		}
		i--;
	}
	return st.top();
}
int main(){
	string s="/-AB*+DEF";
	string ans=posttopre(s);
	cout<<ans<<endl;
}
