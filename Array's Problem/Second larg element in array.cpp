#include<bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int n){
	int largest=arr[0];
	int slargest=-1;
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			slargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && slargest<arr[i]){
			slargest=arr[i];
		}
	}
	return slargest;
}
int secondSmallest(int arr[],int n){
	int smallest=arr[0];
	int Ssmallest=INT_MAX;
	for(int i=1;i<n;i++){
		if(arr[i]<smallest){
			Ssmallest=smallest;
			smallest=arr[i];
		}
		else if(arr[i]!=smallest && arr[i]<Ssmallest){
			Ssmallest=arr[i];
		}
	}
	return Ssmallest;
}
int main(){
	int n=6;
	int arr[n]={1,2,4,7,7,5};
	//better approch
//	int larg=arr[0];
//	for(int i=1;i<n;i++){
//		if(larg<arr[i]){
//			larg=arr[i];
//		}
//	}
//	int seclarg=-1;
//	for(int i=0;i<n;i++){
//		if(arr[i]>seclarg && arr[i]!=larg){
//			seclarg=arr[i];
//		}
//	}
	//optimal approach
	int ans=secondLargest(arr,n);
	cout<<ans<<endl;
	
	int ans1=secondSmallest(arr,n);
	cout<<ans1<<endl;
}
