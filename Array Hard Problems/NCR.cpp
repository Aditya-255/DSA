#include<bits/stdc++.h>
using namespace std;
int funcNCR(int n,int r){
	int res=1;
	for(int i=0;i<r;i++){
		res=res*(n-i);
		res=res/(i+1);
	}
	return res;
}
int main(){
	int n=10;
	int r=3;
	int ans=funcNCR(n,r);
	cout<<ans<<endl;
}
