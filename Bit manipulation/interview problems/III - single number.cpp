#include<bits/stdc++.h>
using namespace std;
vector<int> sin(int arr[],int n){
	int xorr=0;
	for(int i=0;i<n;i++){
		xorr=xorr^arr[i];
	}
	int rig=(xorr&(xorr-1))&xorr;
	int b1=0,b2=0;
	for(int i=0;i<n;i++){
		if(arr[i]&rig){
			b1=b1^arr[i];
		}
		else{
			b2=b2^arr[i];
		}
	}
	vector<int> ans;
	ans.push_back(b1);
	ans.push_back(b2);
	return ans;
}
int main(){
	int n=8;
	int arr[n]={2,3,4,14,3,2,7,7};
	vector<int> res=sin(arr,n);
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}
