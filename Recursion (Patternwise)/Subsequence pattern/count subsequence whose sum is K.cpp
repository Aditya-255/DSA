#include<bits/stdc++.h>
using namespace std;
int func(int i,int s,int sum,int arr[],int n){
	int c=0;
	if(i==n){
		if(s==sum){
			return 1;
		}
		return 0;
	}
	s+=arr[i];
	int l=func(i+1,s,sum,arr,n);
	s-=arr[i];
	int r=func(i+1,s,sum,arr,n);
	
	return l+r;
}
int main(){
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	int ans=func(0,0,sum,arr,n);
	cout<<ans<<endl;
}
