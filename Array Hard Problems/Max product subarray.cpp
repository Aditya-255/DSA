#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int nums[n]={2,3,-2,4};
	int ans=1;
	for(int i=0;i<n;i++){
		int mul=1;
		for(int j=i;j<n;j++){
			mul=mul*nums[j];
			ans=max(ans,mul);
		}
		ans=max(ans,mul);
	}
	cout<<ans<<endl;
}
