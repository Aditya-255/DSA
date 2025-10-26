#include<bits/stdc++.h>
using namespace std;
vector<int> getprime(int n){
	vector<int> lst;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			lst.push_back(i);
			while(n%i==0){
				n=n/i;
			}
		}
	}
	if(n>1){
		lst.push_back(n);
	}
	return lst;
}
int main(){
	int que[4]={3,12,30,60};
	for(int i=0;i<4;i++){
		vector<int> ans=getprime(que[i]);
		for(int i=0;i<ans.size();i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}
