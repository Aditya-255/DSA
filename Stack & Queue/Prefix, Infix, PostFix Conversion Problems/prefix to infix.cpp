#include<bits/stdc++.h>
using namespace std;
string pretoin(string s){
	int i=s.length(ft)-1;
	stack<string> st;
	string ans="";
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
			ans='('+t1+s[i]+t2+')';
			st.push(ans);
		}
		i--;
	}
	return st.top();
}
int main(){
	string s="*+PQ-MN";
	string ans=pretoin(s);
	cout<<ans<<endl; 
}
