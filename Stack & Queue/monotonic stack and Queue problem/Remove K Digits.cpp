#include<bits/stdc++.h>
using namespace std;
string func(string a,int k){
	stack<char> st;
	for(int i=0;i<a.length();i++){
		while(!st.empty() && k>0 &&st.top()-'0'>(a[i]-'0')){
			st.pop();
			k--;
		}
		st.push(a[i]);
	}
	while(k>0){
		st.pop();
		k--;
	}
	if(st.empty()){
		return "0";
	}
	string res="";
	while(!st.empty()){
		res=res+st.top();
		st.pop();
	}
	reverse(res.begin(), res.end()); 
	 int i = 0;
    while(i < res.size() && res[i] == '0') i++;
	
	res = res.substr(i);

    return res == "" ? "0" : res;
}
int main(){
	string a="1432219";
	int k=3;
	string ans=func(a,k);
	cout<<ans<<endl;
	
}
