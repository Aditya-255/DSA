#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int arr[n]={1,13,17,23};
	int k=5;
	vector<int> howmany(n-1,0);
	priority_queue<pair<int,int> > pq;
	for(int i=0;i<n-1;i++){
		pq.push({arr[i+1]-arr[i],i});
	}
	for(int i=1;i<=k;i++){
		pair<int,int> topp = pq.top();
		pq.pop();
		int secind=topp.second;
		howmany[secind]++;
		int inidif=arr[secind+1]-arr[secind];
		int newsecl=inidif/(howmany[secind]+1);
		pq.push({newsecl, secind});

	}
	cout<<pq.top().first<<endl;
}
