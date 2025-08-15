#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int> > arr(4);
	arr[0].push_back(1);
	arr[0].push_back(2);
	arr[0].push_back(3);
	arr[0].push_back(4);
	
	arr[1].push_back(5);
	arr[1].push_back(6);
	arr[1].push_back(7);
	arr[1].push_back(8);
	
	arr[2].push_back(9);
	arr[2].push_back(10);
	arr[2].push_back(11);
	arr[2].push_back(12);
	
	arr[3].push_back(13);
	arr[3].push_back(14);
	arr[3].push_back(15);
	arr[3].push_back(16);
	int n=arr.size();
	int m=arr[0].size();
//	int ans[n][m];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			ans[j][(n-1)-i]=arr[i][j];
//		}
//	}
//	
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			cout<<ans[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		reverse(arr[i].begin(),arr[i].end());
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
