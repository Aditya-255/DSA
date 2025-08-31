#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr,int target){
	int low=0,high=arr.size()-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]>target){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return -1;
}
bool search1(vector<vector<int> > &matrix,int n,int m,int target){
	for(int i=0;i<n;i++){
		int ind=bs(matrix[i],target);
		if(ind!=-1){
			return true;
		}
	}
	return false;
}
int main(){
	vector<vector<int> > matrix;
	vector<int> r1;
	r1.push_back(1);
	r1.push_back(4);
	r1.push_back(7);
	r1.push_back(11);
	r1.push_back(15);
	vector<int> r2;
	r2.push_back(2);
	r2.push_back(5);
	r2.push_back(8);
	r2.push_back(12);
	r2.push_back(19);
	
	vector<int> r3;
	r3.push_back(3);
	r3.push_back(6);
	r3.push_back(9);
	r3.push_back(16);
	r3.push_back(22);
	
	matrix.push_back(r1);
	matrix.push_back(r2);
	matrix.push_back(r3);
	int n=matrix.size();
	int target=13;
	int m=matrix[0].size();
	if(search1(matrix,n,m,target)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}
