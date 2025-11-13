#include<bits/stdc++.h>
using namespace std;
int Trapping(int arr[],int n){
	int lmax=0,rmax=0,t=0;
	int l=0;
	int r=n-1;
	while(l<r){
		if(arr[l]<=arr[r]){
			if(lmax>arr[l]){
				t=t+lmax-arr[l];
			}
			else{
				lmax=arr[l];
			}
			l=l+1;
		}
		else{
			if(rmax>arr[r]){
				t=t+rmax-arr[r];
			}
			else{
				rmax=arr[r];
			}
			r=r-1;
		}
	}
	return t;
}
int main(){
	int n=12;
	int arr[n]={0,1,0,2,1,0,1,3,2,1,2,1};
	int ans=Trapping(arr,n);
	cout<<ans<<endl;
}
