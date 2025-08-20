#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int m=5;
	int arr1[n]={1,3,5,7};
	int arr2[m]={0,2,6,8,9};
	int arr3[n+m];
	int l=0;
	int r=0;
	int i=0;
	while(l<n && r<m){
		if(arr1[l]<=arr2[r]){
			arr3[i]=arr1[l];
			l++;
			i++;
		}
		else{
			arr3[i]=arr2[r];
			r++;
			i++;
		}
	}
	while(i<n){
		arr3[i]=arr1[l];
		i++;
		l++;
	}
	while(r<m){
		arr3[i]=arr2[r];
		i++;
		r++;
	}
	for(int i=0;i<n+m;i++){
		if(i<n){
			arr1[i]=arr3[i];
		}
		else{
			arr2[i-n]=arr3[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
}
