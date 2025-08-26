#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int arr[n]={1,2,5,9};
	int th=6;
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
	}
	for(int i=1;i<=maxi;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum+=(arr[j]+i-1)/i;
		}
		if(sum<=th){
			cout<<i<<endl;
			break;
		}
	} 
}
