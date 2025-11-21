#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="cadbzabcd";
	int n=s.length();
	int maxlen=0;
	for(int i=0;i<n;i++){
		int hash[250]={0};
		int len=0;
		for(int j=i;j<n;j++){
			if(hash[s[j]]==1){
				break;
			} 
			len=j-i+1;
			maxlen=max(len,maxlen);
			hash[s[j]]=1;
		}
	}
	cout<<maxlen<<endl;
}
