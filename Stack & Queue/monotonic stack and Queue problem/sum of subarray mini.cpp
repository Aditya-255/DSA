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
int sum(int arr[],int n){
	vector<int> nse=find1(arr,n);
	vector<int> pse=find2(arr,n);
	int t=0;
	for(int i=0;i<n;i++){
		int l=i-pse[i];
		int r=nse[i]-i;
		t=t+(r*l*arr[i]);
		
	}
	return t;
}
int main(){
	int n=4;
	int arr[n]={3,1,2,4};
	int s=sum(arr,n);
	cout<<s<<endl;
}
