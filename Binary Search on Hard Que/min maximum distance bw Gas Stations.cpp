#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=4;
	int arr[n]={1,13,17,23};
	int k=5;
	vector<int> howmany(n-1,0);
	for(int i=1;i<=k;i++){
		int maxvalue=-1,maxind=-1;
		for(int i=0;i<n-1;i++){
			int dif=arr[i+1]-arr[i];
			int sec = (dif + (howmany[i] + 1) - 1) / (howmany[i] + 1);
			if(maxvalue<sec){
				maxvalue=sec;
				maxind=i;
			}
		}
		howmany[maxind]++;
	}
	int maxans=-1;
	for(int i=0;i<n-1;i++){
		int seclen = ( (arr[i+1]-arr[i]) + (howmany[i]+1) - 1 ) / (howmany[i]+1);
		maxans=max(maxans,seclen);
	}
	cout<<maxans<<endl;
}
