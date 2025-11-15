#include<bits/stdc++.h>
using namespace std;
vector<int> find1(int arr[],int n){
	vector<int> nse(n);
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&& arr[st.top()]>=arr[i]){
			st.pop();
		}
		if(st.empty()){
			nse[i]=n;
		}
		else{
			nse[i]=st.top();
		}
		st.push(i);
	}
	return nse;
}
vector<int> find2(int arr[],int n){
	vector<int> pse(n);
	stack<int> st;
	for(int i=0;i<n;i++){
		while(!st.empty()&& arr[st.top()]>arr[i]){
			st.pop();
		}
		if(st.empty()){
			pse[i]=-1;
		}
		else{
			pse[i]=st.top();
		}
		st.push(i);
	}
	return pse;
}
int func(int arr[],int n){
	vector<int> nse=find1(arr,n);
	vector<int> pse=find2(arr,n);
	int maxi=0;
	
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]*(nse[i]-pse[i]-1));
	}
	return maxi;
}
int main(){
	int n=6;
	int arr[n]={2,1,5,6,2,3};
	int ans=func(arr,n);
	cout<<ans<<endl;
}
