#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int arr[n]={1,1,2,3,3,4,4};
//	map<int,int> mpp;
//	for(int i=0;i<n;i++){
//		mpp[arr[i]]++;
//	}
//	for(int i=0;i<mpp.size();i++){
//		if(mpp[i]==1){
//			cout<<mpp[i]<<endl;
//		}
//	}

	int Xor=0;
	for(int i=0;i<n;i++){
		Xor=Xor^arr[i];
	}
	cout<<Xor<<endl;
}
