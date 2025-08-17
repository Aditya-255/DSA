#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int ans=1;
	cout<<ans<<" ";
	for(int i=1;i<n;i++){
		ans=ans*(n-i);
		ans=ans/i;
		cout<<ans<<" ";
	}
}
