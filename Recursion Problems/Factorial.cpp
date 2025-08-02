#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}
void parfact(int i,int f){
	if(i<1){
		cout<<f<<endl;
		return ;
	}
	parfact(i-1,f*i);
}
int main(){
	int n=4;
	int ans=fact(n);
	cout<<ans<<endl;
	parfact(4,1);
}
