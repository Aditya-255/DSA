#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> arr,int n,int x){
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	vector<vector<int> > arr;
	vector<int> r1;
	r1.push_back(0);
	r1.push_back(0);
	r1.push_back(1);
	r1.push_back(1);
	r1.push_back(1);
	
	vector<int> r2;
	r2.push_back(0);
	r2.push_back(0);
	r2.push_back(0);
	r2.push_back(0);
	r2.push_back(0);
	
	vector<int> r3;
	r3.push_back(0);
	r3.push_back(1);
	r3.push_back(1);
	r3.push_back(1);
	r3.push_back(1);
	arr.push_back(r1);
    arr.push_back(r2);
    arr.push_back(r3);
    int cntmax=0;
    int ind=-1;
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
    	int cnt=m-lowerbound(arr[i],m,1);
    	if(cnt>cntmax){
    		cntmax=cnt;
    		ind=i;
		}
	}
    cout<<ind<<endl;
}
