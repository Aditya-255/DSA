#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int> > intervals; 
	intervals.push_back({1, 3}); 
	intervals.push_back({2, 6}); 
	intervals.push_back({8, 9}); 
	intervals.push_back({9, 11}); 
	intervals.push_back({8, 10}); 
	intervals.push_back({2, 4}); 
	intervals.push_back({15, 18}); 
	intervals.push_back({16, 17});
	int n=intervals.size();
	sort(intervals.begin(),intervals.end());
	vector<vector<int> > ans;
	for(int i=0;i<n;i++){
		if(ans.empty() || intervals[i][0] > ans.back()[1]){
			ans.push_back(intervals[i]);
		}
		else{
			ans.back()[1]=max(ans.back()[1],intervals[i][1]);
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<"["<<ans[i][0]<<","<<ans[i][1]<<"]\n";
	}
}
