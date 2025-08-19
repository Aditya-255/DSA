#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int> > arr;
    arr.push_back({1, 3});
    arr.push_back({2, 6});
    arr.push_back({8, 9});
    arr.push_back({9, 11});
    arr.push_back({8, 10});
    arr.push_back({2, 4});
    arr.push_back({15, 18});
    arr.push_back({16, 17});
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int> > ans;
    for(int i=0;i<n;i++){
    	int start=arr[i][0];
    	int end=arr[i][1];
    	if(!ans.empty()&& end<=ans.back()[1]){
    		continue;
		}
		for(int j=i+1;j<n;j++){
			if(arr[j][0]<=end){
				end=max(end,arr[j][1]);
			}
			else{
				break;
			}
		}
		ans.push_back({start,end});
	}
	for(int i=0;i<ans.size();i++){
		cout<<"["<<ans[i][0]<<","<<ans[i][1]<<"]\n";
	}
}
