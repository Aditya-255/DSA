#include<bits/stdc++.h>
using namespace std;
int stockspan(int arr[],int ind,int n){
	stack<int> st;
	for(int i=0;i<=ind;i++){
		while(!st.empty()&& arr[st.top()]<=arr[i]){
			st.pop();
		}
		int span;
		if(st.empty()){
			span=i+1;
		}
		else{
			span=i-st.top();
		}
		st.push(i);
		if(i==ind){
			return span;
		}
	}
	return 1;
}
int main(){
	int n=7;
	int arr[n]={7,2,1,3,3,1,8};
	int ans=stockspan(arr,4,n);
	cout<<ans<<endl;
}
