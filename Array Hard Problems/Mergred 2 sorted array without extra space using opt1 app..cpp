#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int m=5;
	int arr1[n]={1,3,5,7};
	int arr2[m]={0,2,6,9,10};
	int l=n-1;
	int r=0;
	while(l>=0 && r<m){
		if(arr1[l]>arr2[r]){
			swap(arr1[l],arr2[r]);
			l--;
			r++;
		}
		else{
			break;
		}
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
}
