#include<bits/stdc++.h>
using namespace std;
int Solve1(int arr[],int n,int x,int low,int high){
	int mid=(low+high)/2;
	if(low>high){
		return n;
	}
	if(arr[mid]>x){
		return min(mid, Solve1(arr, n, x, low, mid - 1));
	}
	else{
		return Solve1(arr,n,x,mid+1,high);
	}
}
int Upperbound(int arr[],int n,int x){
	int low=0;
	int high=n-1;
	return Solve1(arr,n,x,low,high);
}
int main(){
	int n=5;
	int arr[n]={2,4,6,7,9};
	int x=7;
	int ans=Upperbound(arr,n,x);  
	cout<<ans<<endl;
}
