#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=9;
	int arr[n]={102,4,100,1,101,3,2,1,1};
	if(n==0){
		return 0;
	}
	int lon=1;
	set<int> st;
	for(int i=0;i<n;i++){
		st.insert(arr[i]);
	}
	for(int i=1;i<st.size();i++){
		if(st.find(arr[i]-1)==st.end()){
			int cnt=1;
			int x=arr[i];
			while(st.find(x+1)!=st.end()){
				x=x+1;
				cnt++;
			}
			lon=max(lon,cnt);
		}
	}
	cout<<lon<<" ";
}
