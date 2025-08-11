#include<bits/stdc++.h>
using namespace std;
vector<int> Twosum(vector<int> &arr,int target){

	vector<pair<int,int> > nums;
	for(int i=0;i<arr.size();i++){
		nums.push_back({arr[i],i});
	}
	sort(nums.begin(), nums.end());
	int l=0;
	int r=arr.size()-1;
	while(l<r){
		int sum=nums[l].first+nums[r].first;
		if(sum==target){
		 	return {nums[l].second,nums[r].second};
		}
		else if(sum<target){
			l++;
		}
		else{
			r--;
		}
	}
	return {};
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(7);
	arr.push_back(11);
	arr.push_back(15);
	int target=9;
	vector<int> ans=Twosum(arr,target);
	if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }
}
