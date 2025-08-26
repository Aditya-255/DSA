#include<bits/stdc++.h>
using namespace std;
bool possible(int bloomDay[],int day,int m,int k){
	int cnt=0,booke=0;
	int n=8;
	for(int i=0;i<n;i++){
		if(bloomDay[i]<=day){
		cnt++;
		}
		else{
			booke+=(cnt/k);
			cnt=0;
		}
	}
	booke+=(cnt/k);
	if(booke>=m){
		return true;
	}
	return false;
}

int BSmin(int bloomDay[],int m,int k){
	int n=8;
	int maxi=INT_MIN;
	int mini=INT_MAX;
	for(int i=0;i<n;i++){
		mini=min(mini,bloomDay[i]);
		maxi=max(maxi,bloomDay[i]);
	}
	int low=mini;
	int high=maxi;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(possible(bloomDay,mid,m,k)){
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
	int n=8;
	int bloomDay[n]={7,7,7,7,13,11,12,7};
	int m=2,k=3;
	int ans=BSmin(bloomDay,m,k);
	cout<<ans<<endl;
}
