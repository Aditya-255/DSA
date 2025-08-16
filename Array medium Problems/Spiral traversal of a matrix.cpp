#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int> > arr(5);
	arr[0].push_back(1);
	arr[0].push_back(2);
	arr[0].push_back(3);
	arr[0].push_back(4);
	arr[0].push_back(5);
	
	arr[1].push_back(6);
	arr[1].push_back(7);
	arr[1].push_back(8);
	arr[1].push_back(9);
	arr[1].push_back(10);
	
	arr[2].push_back(11);
	arr[2].push_back(12);
	arr[2].push_back(13);
	arr[2].push_back(14);
	arr[2].push_back(15);
	
	arr[3].push_back(16);
	arr[3].push_back(17);
	arr[3].push_back(18);
	arr[3].push_back(19);
	arr[3].push_back(20);
	
	arr[4].push_back(21);
	arr[4].push_back(22);
	arr[4].push_back(23);
	arr[4].push_back(24);
	arr[4].push_back(25);
	
	int n=arr.size();
	int m=arr[0].size();
	vector<int> ans;
	int l=0;
	int r=m-1;
	int top=0,bot=n-1;
	
	while(top<=bot && l<=r){
		for(int i=l;i<=r;i++){
			ans.push_back(arr[top][i]);
		}
		top++;
		
		for(int i=top;i<=bot;i++){
			ans.push_back(arr[i][r]);
		}
		r--;
		if(top<=bot){
			for(int i=r;i>=l;i--){
				ans.push_back(arr[bot][i]);
			}
			bot--;
		}
		if(l<=r){
			for(int i=bot;i>=top;i--){
				ans.push_back(arr[i][l]);
			}
			l++;
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
	
}
