#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int n){
	stack<int> st;
	int maxarea=0;
	int nse=0,pse=0;
	int ele=0;
	for(int i=0;i<n;i++){
		while(!st.empty()&& arr[st.top()]>arr[i]){
			ele=st.top();
			st.pop();
			nse=i;
			pse=st.empty() ? -1 :st.top();
			maxarea=max(maxarea,arr[ele]*(nse-pse-1));
		}
		st.push(i);
	}
	while(!st.empty()){
		nse=n;
		ele=st.top();
		st.pop();
		pse=st.empty() ? -1 : st.top();
		maxarea=max(maxarea,arr[ele]*(nse-pse-1));
	}
	return maxarea;
}
int main(){
	int n=8;
	int arr[n]={3,2,10,11,5,10,6,3};
	int ans=func(arr,n);
	cout<<ans<<endl;
}
