#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={6,0,8,1,3};
	int ans[n];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				ans[i]=arr[j];
				break;	
			}
			else{
				ans[i]=-1;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}
