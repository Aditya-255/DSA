#include<bits/stdc++.h>
using namespace std;
bool possible(int arr[],int day,int m,int k){
	int cnt=0;
	int noofb=0;
	int n=8;
	for(int i=0;i<n;i++){
		if(arr[i]<=day){
			cnt++;
		}
		else{
			noofb+=(cnt/k);
			cnt=0;
		}
	}
	noofb+=(cnt/k);
	if(noofb>=m){
		return true;
	}
	return false;
}
int minii(int arr[],int n){
	int mini=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<mini){
			mini=arr[i];
		}
	}
	return mini;
}
int maxii(int arr[],int n){
	int maxi=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
		}
	}
	return maxi;
}
int main(){
	int n=8;
	int arr[n]={7,7,7,7,13,11,12,7};
	int m=2,k=3;
	int maxi=maxii(arr,n);
	int mini=minii(arr,n);
	for(int i=mini;i<=maxi;i++){
		if(possible(arr,i,m,k)){
			cout<<i<<endl;
			break;
		}
	}
}
