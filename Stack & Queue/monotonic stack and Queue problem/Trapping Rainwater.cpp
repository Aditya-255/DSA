#include<bits/stdc++.h>
using namespace std;
int prefix(int arr[],int n,int ind){
	int pmax[n];
	pmax[0]=arr[0];
	for(int i=1;i<n;i++){
		pmax[i]=max(pmax[i-1],arr[i]);
	}
	return pmax[ind];
}
int sufmax(int arr[],int n,int ind){
	int smax[n];
	smax[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
		smax[i]=max(smax[i+1],arr[i]);
	}
	return smax[ind];
}
int Trapping(int arr[],int n){
	int t=0;
	for(int i=0;i<n;i++){
		int leftmax=prefix(arr,n,i);
		int rightmax=sufmax(arr,n,i);
		if(arr[i]<leftmax && arr[i]<rightmax){
			t+=min(leftmax,rightmax)-arr[i];
		}
	}
	return t;
}
int main(){
	int n=12;
	int arr[n]={0,1,0,2,1,0,1,3,2,1,2,1};
	int ans=Trapping(arr,n);
	cout<<ans<<endl;
}
