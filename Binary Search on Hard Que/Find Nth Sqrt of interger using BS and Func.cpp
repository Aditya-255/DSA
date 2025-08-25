#include<bits/stdc++.h>
using namespace std;
int func(int mid,int n,int m){
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*mid;
		if(ans>m){
			return 2;
		}
	}
	if(ans==m) return 1;
	return 0;
}
int main(){
	int n=3;
	int m=27;
	int low=1,high=m;
	while(low<=high){
		int mid=(low+high)/2;
		int midN=func(mid,n,m);
		if(midN==1){
			cout<<mid<<endl;
			break;
		}
		else if(midN==2){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
}
