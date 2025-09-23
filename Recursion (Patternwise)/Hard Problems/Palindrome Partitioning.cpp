#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int start,int end){
	while(start<=end){
		if(s[start++]!=s[end--]){
			return false;
		}
	}
	return true;
}
void palin(int ind,string s,vector<vector<string> > &ans,vector<string> &a){
	if(ind==s.size()){
		ans.push_back(a);
		return ;
	}
	for(int i=ind;i<s.size();i++){
		if(palindrome(s,ind,i)){
			a.push_back(s.substr(ind,i-ind+1));
			palin(i+1,s,ans,a);
			a.pop_back();
		}
	}
}

vector<vector<string> > solve(string s){
	vector<vector<string> > ans;
	vector<string> a;
	palin(0,s,ans,a);
	return ans;
}
int main(){
	string s="aab";
	vector<vector<string> >ans=solve(s);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
