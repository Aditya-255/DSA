#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=9;
	int arr[n]={-2,1,-3,4,-1,2,1,-5,4};
	int sum=0,maxi=INT_MIN;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum>maxi){
			maxi=sum;
		}
		if(sum<0){
			sum=0;
		}
		
	}
	cout<<maxi<<" ";
}
