#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={4,8,5,2,25};
	stack<int> st;
	int ans[n];
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && st.top()>=arr[i]){
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
