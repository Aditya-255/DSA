#include<bits/stdc++.h>
using namespace std;
int solve(vector <int> arr1,vector <int> arr2){
	int n=arr1.size();
	int m=arr2.size();
	if(n>m){
		return solve(arr2,arr1);
	}
	int left=(n+m+1)/2;
	int low=0,high=n;
	int len=n+m;
	while(low<=high){
		int mid1=(low+high)/2;
		int mid2=left-mid1;
		int l1=INT_MIN,l2=INT_MIN;
		int r1=INT_MAX,r2=INT_MAX;
		if(mid1<n){
			r1=arr1[mid1];
		}
		if(mid2<m){
			r2=arr2[mid2];
		}
		if(mid1-1>=0){
			l1=arr1[mid1-1];
		}
		if(mid2-1>=0){
			l2=arr2[mid2-1];
		}
		if(l1<=r2 && l2<=r1){
			if(len%2==1) return max(l1,l2);
			else {
				return (max(l1,l2)+min(r1,r2))/2;
			}
		}
		else if(l1>r2){
			high=mid1-1;
		}
		else{
			low=mid1+1;
		}
	}
	return 0;
}
int main(){

	vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(3);
    arr1.push_back(4);
    arr1.push_back(7);
    arr1.push_back(10);
    arr1.push_back(12);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(15);
	int ans=solve(arr1,arr2);
	cout<<ans<<endl;
}
