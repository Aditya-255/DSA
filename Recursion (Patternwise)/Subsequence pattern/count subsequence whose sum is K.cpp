#include<bits/stdc++.h>
using namespace std;
int func(int i,vector<int> &ds,int s,int sum,int arr[],int n){
	int c=0;
	if(i==n){
		if(s==sum){
			return 1;
		}
		return 0;
	}
	ds.push_back(arr[i]);
	s+=arr[i];
	int l=func(i+1,ds,s,sum,arr,n);
	s-=arr[i];
	ds.pop_back();
	int r=func(i+1,ds,s,sum,arr,n);
	
	return l+r;
}
int main(){
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	vector<int> ds;
	int ans=func(0,ds,0,sum,arr,n);
	cout<<ans<<endl;
}
