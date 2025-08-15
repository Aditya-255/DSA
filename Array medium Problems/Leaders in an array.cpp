#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={10,22,12,3,0,6};
	int maxi=0;
	vector<int> ans;
	for(int i=n-1;i>=0;i--){
		if(arr[i]>maxi){
			maxi=arr[i];
			ans.push_back(maxi);
		}
	}
	for(int i=0;i<3;i++){
		cout<<ans[i]<<" ";
	}
}
