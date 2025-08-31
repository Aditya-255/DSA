#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> &a,int target){
	int low=0,high=a.size();
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==target){
			return mid;
		}
		else if(a[mid]>target){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;
}
int main(){
	vector<vector<int> > arr;
	vector<int> r1;
    r1.push_back(1);
    r1.push_back(2);
    r1.push_back(3);
    arr.push_back(r1);

    vector<int> r2;
    r2.push_back(4);
    r2.push_back(5);
    r2.push_back(6);
    arr.push_back(r2);

    vector<int> r3;
    r3.push_back(7);
    r3.push_back(8);
    r3.push_back(9);
    arr.push_back(r3);
    int target=6;
    int n=arr.size();
    int m=arr[0].size();
    for(int i=0;i<n;i++){
    	if(arr[i][0]<=target && target<=arr[i][n-1]){
    		cout<<bs(arr[i],target)<<endl;;
		}
	}
}
