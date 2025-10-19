#include<bits/stdc++.h>
using namespace std;
bool prime(int ind){
	if(ind<=1){
		return false;
	}
	int cnt=0;
	for(int i=1;i<=ind;i++){
		if(ind%i==0){
			cnt++;
		}
	}
	if(cnt==2){
		return true;
	}
	return false;
}
int main(){
	vector<int> list;
	int n=35; 
	for(int i=2;i<=n;i++){
		if(n%i==0){
			if(prime(i)){
				list.push_back(i);
			}
		}
	}
	for(int i=0;i<list.size();i++){
		cout<<list[i]<<" ";
	}
}
