#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={4,2,2,6,4};
	int xr=0;
	map<int,int> mpp;
	mpp[xr]++;
	int cnt=0;
	int k=6;
	for(int i=0;i<n;i++){
		xr=xr^arr[i];
		int x=xr^k;
		cnt+=mpp[x];
		mpp[xr]++;
	}
	cout<<cnt<<endl;
}
