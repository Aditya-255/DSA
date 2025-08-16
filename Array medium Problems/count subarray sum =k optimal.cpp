#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=10;
	int arr[n]={1,2,3,-3,1,1,1,4,2,-3};
	int k=3;
	map<int,int> mpp;
	mpp[0]=1;
	int presum=0;
	int cnt=0;
	for(int i=0;i<n;i++){
		presum+=arr[i];
		int remove=presum-k;
		cnt+=mpp[remove];
		mpp[presum]+=1;
	}
	cout<<cnt<<endl;
}
