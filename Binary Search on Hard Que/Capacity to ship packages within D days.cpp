#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int cap,int n){
	int day=1,load=0;
	for(int i=0;i<n;i++){
		if(load+arr[i]>cap){
			day++;
			load=arr[i];
		}
		else{
			load+=arr[i];
		}
	}
	return day;
}
int main(){
	int n=10;
	int arr[n]={1,2,3,4,5,6,7,8,9,10};
	int days=5;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	for(int i=maxi;i<=sum;i++){
		int daysreq=func(arr,i,n);
		if(daysreq<=days){
			cout<<i<<endl;
			break;
		}
	}
}
