#include<bits/stdc++.h>
using namespace std;
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
	int maxcol=-1;
	int ind=-1;
	int n=arr.size();
	int m=arr[0].size();
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<m;j++){
			cnt+=arr[i][j];
		}
		if(cnt>maxcol){
			maxcol=cnt;
			ind=i;
		}
	}
	cout<<ind<<endl;
}
