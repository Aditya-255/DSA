#include<bits/stdc++.h>
using namespace std;
void Findpivot(int arr[],int low,int high){
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j){
		while(arr[i]>=arr[pivot]&&i<=high){
			i++;
		}
		while(arr[j]<arr[pivot]&& j>=low){
			j--;
		}
	}
	if(i<j){
		swap(arr[low],arr[j]);
	}
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
}
