#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=10;
	int arr[n]={1,2,3,4,5,6,7,8,5,1};
	for(int i=0;i<n;i++){
		if((i==0 || arr[i-1]<arr[i]) &&
			(i==n-1 || arr[i]>arr[i+1])){
				cout<<i<<endl;
			}
	}
}
