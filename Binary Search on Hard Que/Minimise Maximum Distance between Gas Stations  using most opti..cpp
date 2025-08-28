#include<bits/stdc++.h>
using namespace std;
int countSplits(int arr[],double mid,int n){
	int cnt=0;
	for(int i=1;i<n;i++){
		double d = arr[i] - arr[i-1];
		int needed = ceil(d / mid) - 1; 
		cnt+=needed;
	}
	return cnt;
}
int main(){
	int n=4;
	int arr[n]={1,13,17,23};
	int k=5;
	double low=0,high=0,ans=-1;
	for(int i=0;i<n-1;i++){
		high=max(high,(double)(arr[i+1] - arr[i]));
	}
	double dif=1e-6;
	while(high-low>dif){
		double mid=(low+high)/(2.0);
		int cnt=countSplits(arr,mid,n);
		if(cnt>k){
			low=mid;
		}
		else{
			ans=mid;
			high=mid;
		}
	}
	  cout << fixed << setprecision(6) << ans << endl;
}
