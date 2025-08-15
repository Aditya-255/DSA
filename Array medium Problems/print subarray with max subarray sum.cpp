#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=9;
	int arr[n]={-2,1,-3,4,-1,2,1,-5,4};
	int sum=0,maxi=INT_MIN;
	int anss=-1;
	int anse=-1;
	for(int i=0;i<n;i++){
		int s;
		if(sum==0){
			s=i;
		}
		sum+=arr[i];
		if(sum>maxi){
			maxi=sum;
			anss=s;
			anse=i;
		}
		if(sum<0){
			sum=0;
		}
	}
	for(int i=anss;i<=anse;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<maxi<<" ";
}
