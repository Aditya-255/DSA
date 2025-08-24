#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=11;
	int arr[n]={1,1,2,2,3,3,4,5,5,6,6};
	for(int i=0;i<n;i++){
		if(i==0){
			if(arr[i]!=arr[i+1]){
				cout<<arr[i]<<endl;
			}
		}
		else if(i==n-1){
			if(arr[i]!=arr[i-1]){
				cout<<arr[i]<<endl;
			}
		}
		else{
			if(arr[i]!=arr[i+1]&&arr[i]!=arr[i-1]){
				cout<<arr[i]<<endl;
			}
		}
	}
}
