#include<bits/stdc++.h>
using namespace std;
int priority(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    else return 0;
}
string posttoin(string s){
	int i=0;
	stack<string> st;
	string ans="";
	while(i<s.length()){
		if((s[i]>='A'&&s[i]<='Z')
		|| (s[i]>='a'&&s[i]<='z')
		|| (s[i]>='0' &&s[i]<='9')){
			string temp(1, s[i]); 
			st.push(temp);
		}
		else{
			string t1=st.top();
			st.pop();
			string t2=st.top();
			st.pop();
			ans='(' + t2+s[i]+t1+')';
			st.push(ans);
		}
		i++;
	}
	return st.top();
}
int main(){
	string s="AB-DE+F*/";
	string ans=posttoin(s);
	cout<<ans<<endl;
}
