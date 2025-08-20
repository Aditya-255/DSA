#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={4,3,6,2,1,1};
	int hash[n+1]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	int rep=-1;
	int mis=-1;
	for(int i=1;i<=n;i++){
		if(hash[i]==2) rep=i;
		else if(hash[i]==0) mis=i;
		if(rep!=-1 && mis!=-1){
			break;
		}
	}
	cout<<rep<<" "<<mis<<endl;
}
