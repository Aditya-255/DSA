#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int m=4;
	int arr1[n]={1,3,4,7,10,12};
	int arr2[m]={2,3,6,15};
	int i=0,j=0;
	int len=(n+m);
	int ind2=len/2;
	int ind1=ind2-1;
	int cnt=0;
	int el1=-1,el2=-1;
	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			if(cnt==ind1) el1=arr1[i];
			if(cnt==ind2) el2=arr1[i];
			cnt++;
			i++;
		}
		else{
			if(cnt==ind1) el1=arr2[j];
			if(cnt==ind2) el2=arr2[j];
			cnt++;
			j++;
		}
	}
	while(i<n){
		if(cnt==ind1) el1=arr1[i];
		if(cnt==ind2) el2=arr1[i];
		cnt++;
		i++;
	}
	while(j<m){
		if(cnt==ind1) el1=arr2[j];
		if(cnt==ind2) el2=arr2[j];
		cnt++;
		j++;
	}
	int a=(el1+el2)/2;
	int b=el2;
	if(len%2==1){
		cout<<b<<endl;
	}
	else{
		cout<<a<<endl;
	}
}
