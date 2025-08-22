#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int arr[n]={1,2,4,7};
	int x=6;
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<ans<<endl;
}
