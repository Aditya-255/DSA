#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=13;
	int arr[n]={-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
//	sort(nums.begin(),nums.end());
	vector<vector<int> > ans;
	for(int i=0;i<n;i++){
		if(i>0&& arr[i]==arr[i-1]){
			continue;
		}	
		int j=i+1;
		int k=n-1;
		while(j<k){
			int sum=arr[i]+arr[j]+arr[k];
			if(sum<0){
				j++;
			}
			else if(sum>0){
				k--;
			}
			else{
				vector<int> temp;
				temp.push_back(arr[i]);
				temp.push_back(arr[j]);
				temp.push_back(arr[k]);
				ans.push_back(temp);
				j++;
				k--;
				while(j<k && arr[j]==arr[j-1]){
					j++;
				}
				while(j<k && arr[k]==arr[k+1]){
					k--;
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
