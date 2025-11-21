#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="cadbzabcd";
	int hash[250]={-1};
	int l=0,r=0;
	int maxlen=0;
	int n=s.length();
	while(r<n){
		if(hash[s[r]]!=-1){
			if(hash[s[r]]>=l){
				l=hash[s[r]]+1;
			}
		}
		int len=r-l+1;
		maxlen=max(len,maxlen);
		hash[s[r]]=r;
		r++;
	}
	cout<<maxlen<<endl;
}
