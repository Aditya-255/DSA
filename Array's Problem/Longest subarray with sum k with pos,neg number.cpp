#include<bits/stdc++.h>
using namespace std;
int lonsubarry(int arr[],int k,int n){
	int l=0,r=0;
	int sum=arr[0];
	int maxlen=0;
	while(r<n){
		while(l<=r && sum>k){
			sum-=arr[l];
			l++;
		}
		if(sum==k){
			maxlen=max(maxlen,r-l+1);
		}
		r++;
		if(r<n) sum+=arr[r];	
	}
	return maxlen;
}
int main(){
	int n=9;
	int arr[n]={1,2,3,1,1,1,1,3,3};
	int k=6;
	int ans=lonsubarry(arr,k,n);
	cout<<ans<<endl;
}
