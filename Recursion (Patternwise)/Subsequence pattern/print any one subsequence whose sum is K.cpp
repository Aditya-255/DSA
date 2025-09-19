#include<bits/stdc++.h>
using namespace std;
bool func(int i,vector<int> &ds,int s,int sum,int arr[],int n){
	if(i==n){
		if(s==sum){
			for(int i=0;i<ds.size();i++){
				cout<<ds[i]<<" ";
			}
			return true;
		}
		return false;
	}
	ds.push_back(arr[i]);
	s+=arr[i];
	if(func(i+1,ds,s,sum,arr,n)==true){
		return true;
	}
	s-=arr[i];
	ds.pop_back();
	
	if(func(i+1,ds,s,sum,arr,n)==true){
		return true;
	}
	return false;
}
int main(){
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	vector<int> ds;
	func(0,ds,0,sum,arr,n);
}
