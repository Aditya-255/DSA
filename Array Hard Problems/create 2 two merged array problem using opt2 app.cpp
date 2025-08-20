#include<bits/stdc++.h>
using namespace std;
void SwapIfGreater(int arr1[],int arr2[],int ind1,int ind2){
	if(arr1[ind1]>arr2[ind2]){
		swap(arr1[ind1],arr2[ind2]);
	}
}
int main(){
	int n=5;
	int m=5;
	int arr1[n]={1,3,5,7,9};
	int arr2[m]={2,4,6,8,10};
	int len=n+m;
	int gap=(len/2)+(len%2);
	while(gap>0){
		int l=0;
		int r=l+gap;
		while(r<len){
			if(l<n && r>=n){
				SwapIfGreater(arr1,arr2,l,r-n);
			}
			else if(l>=n){
				SwapIfGreater(arr1,arr2,l-n,r-n);
			}
			else{
				SwapIfGreater(arr1,arr2,l,r);
			}
			l++,r++;
		}
		if(gap==1){
			break;
		}
		gap=(gap/2)+(gap%2);
	}
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
}
