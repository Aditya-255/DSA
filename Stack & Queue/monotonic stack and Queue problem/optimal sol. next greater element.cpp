#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=9;
	int arr[n]={4,12,3,5,6,1,2,3,6};
	list<int> l;
	int ans[n];
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && st.top()<=arr[i]){
			st.pop();
		}
		if(st.empty()){
			ans[i]=-1;
		}
		else{
			ans[i]=st.top();
		}
		st.push(arr[i]);
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}
