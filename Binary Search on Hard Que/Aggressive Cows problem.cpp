#include<bits/stdc++.h>
using namespace std;
bool canweplace(int arr[],int dist,int cows){
	int cntcow=1,last=arr[0];
	int n=6;
	for(int i=1;i<n;i++){
		if(arr[i]-last>=dist){
			cntcow++;
			last=arr[i];
		}
	}
	if(cntcow>=cows){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n=6;
	int arr[n]={0,3,4,7,10,9};
	sort(arr, arr + n);
	int cows=4;
	int mini=INT_MAX;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}
	for(int i=1;i<=(maxi-mini);i++){
		if(canweplace(arr,i,cows)){
			continue;
		}
		else{
			cout<<i-1<<endl;
			break;
		}
	}
}
