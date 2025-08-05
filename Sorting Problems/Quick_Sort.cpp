#include<bits/stdc++.h>
using namespace std;
int Findpivot(int arr[],int low,int high){
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j){
		while(arr[i]<=pivot &&i<=high-1){
			i++;
		}
		while(arr[j]>pivot && j>=low+1){
			j--;
		}
		if(i<j){
		swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j; 
}
void Quick_Sort(int arr[],int low,int high){
	if(low<high){
		int partition=Findpivot(arr,low,high);
		Quick_Sort(arr,low,partition-1);
		Quick_Sort(arr,partition+1,high);
	}
}
int main(){
	int n=8;
	int arr[n]={4,6,2,5,7,9,1,3};
	Quick_Sort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
