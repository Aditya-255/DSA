#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n<=1) {
		return n;
	}
	int last=fib(n-1);
	int slast=fib(n-2);
	return last + slast;
}
int main(){
	int a=0;
	int b=1;
	int n=7;
	int temp=0;
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<=n;i++){
		temp=a+b;
		a=b;
		b=temp;
		cout<<temp<<" ";
	}
	int ans=fib(5);
	cout<<ans<<endl;
}
