#include<bits/stdc++.h>
using namespace std;
bool Possible(int arr[],int n,int k,int ind){
	int pai=1;
	int time=0;
	for(int i=0;i<n;i++){
		if(arr[i]+time<=ind){
			time+=arr[i];
		}
		else{
			pai++;
			time=arr[i];
		}
	}
	if(pai==k){
		return true;
	}
	return false;
}
int Minel(int arr[],int n,int k){
	int low=arr[n-1];
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int ans=-1;
	int high=sum;
	while(low<=high){
		int mid=(low+high)/2;
		if(Possible(arr,n,k,mid)){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	int n=4;
	int arr[n]={10,20,30,40,};
	int k=2;
	int ans=Minel(arr,n,k);
	cout<<ans<<endl;
}
