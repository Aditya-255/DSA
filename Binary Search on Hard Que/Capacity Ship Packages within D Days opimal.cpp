#include<bits/stdc++.h>
using namespace std;
int Days(int weights[],int cap,int n){
	int day=1,load=0;
	for(int i=0;i<n;i++){
		if(load+weights[i]>cap){
			day++;
			load=weights[i];
		}
		else{
			load+=weights[i];
		}
	}
	return day;
}
int leastcapacity(int weights[],int n,int day){
	int ans=-1;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		maxi=max(maxi,weights[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=weights[i];
	}
	int low=maxi,high=sum;
	while(low<=high){
		int mid=(low+high)/2;
		int noofdays=Days(weights,mid,n);
		if(noofdays<=day){
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
	int n=10;
	int weights[n]={1,2,3,4,5,6,7,8,9,10};
	int day=5;
	int ans=leastcapacity(weights,n,day);
	cout<<ans<<endl;
}
