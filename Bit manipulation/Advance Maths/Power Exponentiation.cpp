#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=3;
	int n=2;
	int ans=1;
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
	cout<<ans<<endl;
}
