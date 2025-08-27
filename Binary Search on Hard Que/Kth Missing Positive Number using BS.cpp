#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={2,3,7,8,11};
	int k=5;
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		int mising=arr[mid]-(mid+1);
		if(mising<k){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cout<<low+k<<endl;
}
