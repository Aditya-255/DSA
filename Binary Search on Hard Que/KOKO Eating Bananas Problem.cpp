#include<bits/stdc++.h>
using namespace std;
int func(int piles[],int hourly){
	int totalhours=0;
	int n=4;
	for(int i=0;i<n;i++){
		totalhours+=ceil(piles[i]/hourly);
	}
	return totalhours;
}
int maxi(int piles[],int n){
	int maxi=piles[0];
	for(int i=0;i<n;i++){
		if(piles[i]>maxi){
			maxi=piles[i];
		}
	}
	return maxi;
}
int main(){
	int n=4;
	int piles[n]={3,6,7,11};
	int h=8;
	int low=1,high=maxi(piles,n);
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		int totalhours=func(piles,mid);
		if(totalhours<=h){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<ans<<endl;
}
