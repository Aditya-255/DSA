#include<bits/stdc++.h>
using namespace std;
void func(int ind,int tar,int arr[],vector<int> ds,int n){
	if(tar==0){
		for(int i=0;i<ds.size();i++){
			cout<<ds[i]<<" ";
		}
			cout<<endl;
	}
	
	for(int i=ind;i<n;i++){
		if(i>ind && arr[i]==arr[i-1]){
			continue;
		}
		if(arr[i]>tar){
			break;
		}
		ds.push_back(arr[i]);
		func(i+1,tar-arr[i],arr,ds,n);
		ds.pop_back();
	}
}
int main(){
	int arr[]={1,1,1,2,2};
	int tar=4;
	int n=5;
	vector<int> ds;
	func(0,tar,arr,ds,n);
}
