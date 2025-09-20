#include<bits/stdc++.h>
using namespace std;
void func(int i,int arr[],int target,vector<int> &ds,int n){
	vector<int> ans;
	if(i==n){
		if(target==0){
			for(int i=0;i<ds.size();i++){
				cout<<ds[i]<<" ";
			}
			cout<<endl;
		}
		return ;
	}
	if(arr[i]<=target){
		ds.push_back(arr[i]);
		func(i,arr,target-arr[i],ds,n);
		ds.pop_back();
	}
	func(i+1,arr,target,ds,n);
}
int main(){
	int arr[]={2,3,6,7};
	int n=4;
	int target=7;
	vector<int> ds;
	func(0,arr,target,ds,n);
}
