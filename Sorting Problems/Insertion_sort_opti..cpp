#include<bits/stdc++.h>
using namespace std;
void insertion_sort1(int arr[],int n){
	for(int i=0;i<n;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
}
int main(){
	int n=5;
	int arr[n]={1,2,3,4,5};
	insertion_sort1(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
