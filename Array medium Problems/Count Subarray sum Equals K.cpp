#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=10;
	int arr[n]={1,2,3,-3,1,1,1,4,2,-3};
	int k=3;
	int cnt=0;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(sum==k){
			cnt++;
			}
		}
		
	}
	cout<<cnt<<endl;
}
