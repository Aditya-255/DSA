#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int arr[n]={1,2,3,4,5,6,7};
	int low=0;
	int high=n-1;
	int ans=n;
	int x=4;
	while(low<=high){
		int mid=low+((high-low)/2);
		if(arr[mid]>x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		} 
	}
	cout<<ans<<endl;
}
