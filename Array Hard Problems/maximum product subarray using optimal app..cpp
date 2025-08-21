#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int nums[n]={2,3,-2,4};
	int pre=1,suff=1;
	int ans=INT_MIN;
	for(int i=0;i<n;i++){
		if(pre==0) pre=1;
		if(suff==0) suff=1;
		pre=pre*nums[i];
		suff=suff*nums[n-i-1];
		ans=max(ans,max(pre,suff));
	}
	cout<<ans<<endl;
}
