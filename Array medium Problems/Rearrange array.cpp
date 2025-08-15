#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={3,1,-2,-5,2,-4};
	vector<int> arr1(n,0);
	int pos=0,neg=1;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			arr1[neg]=arr[i];
			neg+=2;
		}
		else{
			arr1[pos]=arr[i];
			pos+=2;
		}
	}
	for(int i=0;i<arr1.size();i++){
		cout<<arr1[i]<<" ";
	}
}
