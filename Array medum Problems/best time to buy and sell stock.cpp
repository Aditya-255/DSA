#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={7,1,5,3,6,4};
	int mini=arr[0],pr=0;
	for(int i=1;i<n;i++){
		int cost=arr[i]-mini;
		pr=max(pr,cost);
		mini=min(mini,arr[i]);
	}
	cout<<pr<<" "; 
}
