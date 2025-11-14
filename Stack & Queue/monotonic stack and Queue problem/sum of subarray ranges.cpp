#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		int longe=arr[i],small=arr[i];
		for(int j=i+1;j<n;j++){
			longe=max(longe,arr[j]);
			small=min(small,arr[j]);
			s=s+longe-small;
		}
	}
	return s;
}
int main(){
	int n=4;
	int arr[n]={1,4,3,2};
	int ans=sum(arr,n);
	cout<<ans<<endl;
}
