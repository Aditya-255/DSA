#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=3;
	int n=9;
	int ans=1;
	int m=n;
	while(n>0){
		if(n%2==1){
			ans=ans*x;
			n=n-1;
		}
		else{
			n=n/2;
			x=x*x;
		}
	}
	if(m<0){
		ans=1/ans;
	}
	cout<<ans<<endl;
}
