#include<bits/stdc++.h>
using namespace std;
list<int> func(int arr[],int n){
	list<int> st;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			st.push_back(arr[i]);
		}
		else{
			while(!st.empty() && st.back()>0 && st.back()<abs(arr[i])){
				st.pop_back();
			}
			if(!st.empty() && st.back()==abs(arr[i])){
				st.pop_back();
			}
			else if(st.empty()||st.back()<0){
				st.push_back(arr[i]);
			}
		}
	}
	return st;
}
int main(){
	int n=10;
	int arr[n]={4,7,1,1,2,-3,-7,17,15,-16};
	list<int> ans=func(arr,n);
	vector<int> v(ans.begin(), ans.end());

	for (int i = 0; i < v.size(); i++) {
	    cout << v[i] << " ";
	}
}
