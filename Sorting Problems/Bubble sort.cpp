#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main(){
	int n=6;
	int arr[n]={13,46,24,20,52,9};
	bubble_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
