#include<bits/stdc++.h>
using namespace std;
int longestSubarray(int nums[], int k,int n){
        map<int ,int> presum;
        int sum=0;
        int len=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k){
                len=max(len,i+1);
            }
            int rem=sum-k;
            if(presum.find(rem)!=presum.end()){
                int l=i-presum[rem];
                len=max(len,l);
            }
            presum[sum]=i;
        }
        return len;
    }
int main(){
	int n=10;
	int arr[n]={1,1,2,3,4,5,1,1,1,1};
	int k=3;
	int ans=longestSubarray(arr,k,n);
	cout<<ans<<endl;
}
