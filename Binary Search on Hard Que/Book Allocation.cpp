#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int p){
	int st=1,pages=0;
	int n=6;
	for(int i=0;i<n;i++){
		if(pages+arr[i]<=p){
			pages+=arr[i];
		}
		else{
			st++;
			pages=arr[i];
		}
	}
	return st;
}
int main(){
	int n=5;
	int arr[n]={25,46,28,49,24};
	int st=4;
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		maxi=max(maxi,arr[i]);
	}
	int low=maxi,high=sum;
	int cntst=0;
	for(int i=low;i<=high;i++){
		cntst=func(arr,i);
		if(cntst==st){
			cout<<i<<endl;
			break;
		}
	}
}
