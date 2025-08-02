#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int r){
	if(l>=r){
		return ;
	}
	swap(arr[l],arr[r]);
	reverse(arr,l+1,r-1);
}
void revarr(int arr1[],int i,int n){
	if(i>=n/2){
		return ;
	}
	swap(arr1[i],arr1[n-i-1]);
	revarr(arr1,i+1,n);
}
int main(){
	int arr[]={1,2,3,4,5};
	reverse(arr,0,4);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int arr1[]={1,2,3,4,5};
	revarr(arr1,0,5);
	for(int i=0;i<5;i++){
		cout<<arr1[i]<<" ";
	}
}
