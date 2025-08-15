#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(0);
	arr.push_back(0);
	int ind=-1;
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[i+1]){
			ind=i;
			break;
		}
	}
	if(ind==-1){
		reverse(arr.begin(),arr.end());
	}
	for(int i=n-1;i>ind;i--){
		if(arr[i]>arr[ind]){
			swap(arr[i],arr[ind]);
			break;
		}
	}
	reverse(arr.begin()+ind+1,arr.end());
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
