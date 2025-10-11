#include<bits/stdc++.h>
using namespace std;
int cnt(int n){
	int c=0;
	while(n>1){
		if(n%2==1){
			c++;
		}
		n=n/2;
	}
	if(n==1){
		c++;
	}
	return c;
}
int main(){
	int n=13;
	int ans=cnt(n);
	cout<<ans<<endl;
}
