#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int> &arr,int low,int mid,int high){
	vector<int > temp;
	int left=low;
	int right=mid+1;
	while(left<=mid &&right<=high){
		if(arr[left]<=arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	for(int i=low;i<=high;i++){
		arr[i]=temp[i-low];
	}
}
void MergeSort(vector<int> &arr,int low,int high){
	if(low>=high){
		return ;
	}
	int mid=(low+high)/2;
	MergeSort(arr,low,mid);
	MergeSort(arr,mid+1,high);
	Merge(arr,low,mid,high);
}
int main(){
	int n=5;
	vector<int> arr;
	arr.push_back(3);
	arr.push_back(2);
	arr.push_back(4);
	arr.push_back(1);
	arr.push_back(4);
	int low=0;
	int high=n-1;
	MergeSort(arr,low,high);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
