#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={2,10,12,1,11};
	int ans[n];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<i+n;j++){
			int ind=j%n;
			if(arr[ind]>arr[i]){
				ans[i]=arr[ind];
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
