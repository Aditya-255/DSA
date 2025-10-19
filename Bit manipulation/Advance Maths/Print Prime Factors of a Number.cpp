#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> list;
	int n=60;
	for(int i=2;i<=n;i++){
		if(n%i==0){
			list.push_back(i);
			while(n%i==0){
				n=n/i;
			}
		}
	}
	for(int i=0;i<list.size();i++){
		cout<<list[i]<<" ";
	}
}
