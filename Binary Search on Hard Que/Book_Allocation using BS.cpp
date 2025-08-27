#include<bits/stdc++.h>
using namespace std;
int Book(int arr[],int page){
	int st=1,pagest=0;
	int n=6;
	for(int i=1;i<n;i++){
		if(arr[i]+pagest<=page){
			pagest+=arr[i];
		}
		else{
			st++;
			pagest=arr[i];
		}
	}
	return st;
}
int main(){
	int n=6;
	int arr[n]={25,46,28,49,24};
	int st=4;
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		maxi=max(maxi,arr[i]);
	}
	int low=maxi,high=sum;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		int nost=Book(arr,mid);
		if(nost>st){
			low=mid+1;
		}
		else{
			ans=mid;
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}
