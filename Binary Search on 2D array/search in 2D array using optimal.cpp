#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int> > &arr,int n,int m,int target){
	int low=0,high=(n*m)-1;
	while(low<=high){
		int mid=(low+high)/2;
		int row=mid/m,col=mid%m;
		if(arr[row][col]==target){
			return true;
		}
		else if(arr[row][col]>target){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return false;
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
    int n=arr.size();
    int m=arr[0].size();
    int target=3;
    
    if(search(arr,n,m,target)){
    	cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}
