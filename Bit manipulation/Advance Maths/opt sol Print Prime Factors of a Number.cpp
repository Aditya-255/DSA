#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> lst;
	int n=780;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			lst.push_back(i);
			while(n%i==0){
				n=n/i;
			}
		}
	}
	if(n!=1){
		lst.push_back(n);
	}
	for(int i=0;i<lst.size();i++){
		cout<<lst[i]<<" ";
	}
}
