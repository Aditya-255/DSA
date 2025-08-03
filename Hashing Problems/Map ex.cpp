#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int arr[n]={1,2,3,1,3,2,12};
	
	map<int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	int q;
	cin>>q;
	cout<<mpp[q]<<endl;
}
