#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int arr[n]={2,2,3,3,1,2,2};
	int cnt=0;
	int el;
	for(int i=0;i<n;i++){
		if(cnt==0){
			cnt=1;
			el=arr[i];
		}
		else if(arr[i]==el){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	int cnt1=0;
	for(int i=0;i<n;i++){
		if(arr[i]==el){
			cnt1++;
		}
	}
	if(cnt1>(n/2)){
		cout<<el<<" ";
	}
	else{
		cout<<-1<<" ";
	}
}
