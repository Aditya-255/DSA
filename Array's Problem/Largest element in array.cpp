#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={3,2,10,5,2};
	int maxi=arr[0];
	for(int i=1;i<n;i++){
		if(maxi<arr[i]){
			maxi=arr[i];
		}
	}
	cout<<maxi;
}
