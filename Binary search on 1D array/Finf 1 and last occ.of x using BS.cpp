#include<bits/stdc++.h>
using namespace std;
int First(int arr[],int n,int x){
	int low=0,high=n-1;
	int fst=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x){
			fst=mid;
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return fst;
}
int Last(int arr[],int n,int x){
	int low=0,high=n-1;
	int lst=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x){
			lst=mid;
			low=mid+1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return lst;
}
int main(){
	int n=8;
	int arr[n]={2,8,8,8,8,8,11,13};
	int x=8;
	int fst=First(arr,n,x);
	int lst=Last(arr,n,x);
	cout<<fst<<" "<<lst<<endl;
}
