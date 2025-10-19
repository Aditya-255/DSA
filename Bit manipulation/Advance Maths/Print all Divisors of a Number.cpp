#include<bits/stdc++.h>
using namespace std;
int main(){
	 vector<int> ans;
	 int n=60;
	 for(int i=1;i<=n;i++){
	 	if(n%i==0){
	 		ans.push_back(i);
		 }
	 }
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
} 
