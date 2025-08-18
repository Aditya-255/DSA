#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=14;
	int nums[n]={1,1,1,2,2,2,3,3,3,4,4,4,5,5};
//	sort(nums.begin(),nums.end());
	int target=8;
	vector<vector<int> > ans;
	for(int i=0;i<n;i++){
		if(i>0 && nums[i]==nums[i-1]){
			continue;
		}
		for(int j=i+1;j<n;j++){
			if(j>i+1 && nums[j]==nums[j-1]){
				continue;
			}
			int k=j+1;
			int l=n-1;
			while(k<l){
				int sum=nums[i];
				sum+=nums[j];
				sum+=nums[k];
				sum+=nums[l];
				if(sum==target){
					vector<int> temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					temp.push_back(nums[k]);
					temp.push_back(nums[l]);
					ans.push_back(temp);
					k++;
					l--;
					while(k<l&&nums[k]==nums[k-1]){
						k++;
					}
					while(k<l&&nums[l]==nums[l+1]){
						l--;
					}
				}
				else if(sum<target){
					k++;
				}
				else{
					l--;
				}
			}
		}
	}
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
