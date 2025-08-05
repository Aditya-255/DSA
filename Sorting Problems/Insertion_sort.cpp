#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
}
int main(){
	int n=6;
	int arr[n]={25,5,13,4,6,8};
	insertion_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
