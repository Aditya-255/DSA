#include<bits/stdc++.h>
using namespace std;
int stockspan(int arr[],int val,int n){
	int c=0;
		for(int j=val-1;j>=0;j--){
			if(arr[j]<=arr[val]){
				c++;
			}
			else{
				break;
			}
		}
	return c;
}
int main(){
	int n=7;
	int arr[n]={7,2,1,3,3,1,8};
	int ans=stockspan(arr,4,n);
	cout<<ans<<endl;
}
