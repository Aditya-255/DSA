#include<bits/stdc++.h>
using namespace std;
int func(int n){
	if(n%4==1){
		return 1;
	}
	else if(n%4==2){
		return n+1;
	}
	else if(n%4==3){
		return 0;
	}
	else{
		return n;
	}
}
int fun(int f,int l){
	return func(f-1) ^ func(l);
}
int main(){
	int f=4;
	int l=8;
	int ans=fun(f,l);
	cout<<ans<<endl;
}
