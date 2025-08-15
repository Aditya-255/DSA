#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int> > arr(4);
	arr[0].push_back(1);
	arr[0].push_back(1);
	arr[0].push_back(1);
	arr[0].push_back(1);
	
	arr[1].push_back(1);
	arr[1].push_back(0);
	arr[1].push_back(1);
	arr[1].push_back(1);
	
	arr[2].push_back(1);
	arr[2].push_back(1);
	arr[2].push_back(0);
	arr[2].push_back(1);
	
	arr[3].push_back(1);
	arr[3].push_back(0);
	arr[3].push_back(0);
	arr[3].push_back(1);
	
	int col[4]={0};
	int row[4]={0};
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			if(arr[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			if(col[j]==1 || row[i]==1){
				arr[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
