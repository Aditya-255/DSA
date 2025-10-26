#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=10;
	int prime[n+1];
	for(int i=2;i<=n;i++){
		prime[i]=1;
	}
	for(int i=2;i<=n;i++){
		if(prime[i]==1){
			for(int j=2*i;j<=n;j+=i){
				prime[j]=0;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(prime[i]==1){
			cout<<i<<" "; 
		}
	}
}
