#include<bits/stdc++.h>
using namespace std;
int func(int dividend,int divisor){
	if(dividend==divisor){
		return 1;
	}
	bool sign=true;
	if(dividend>=0 && divisor<0){
		sign=false;
	}
	if(dividend<0 && divisor>0){
		sign=false;
	}
	int n=abs(dividend);
	int d=abs(divisor);
	int ans=0;
	while(n>=d){
		int cnt=0;
		while(n>=(d<<(cnt+1))){
			cnt++;
		}
		ans+=(1<<cnt);
		n=n-(d*(1<<cnt));
	}
	if(ans>=pow(2,31) && sign==false){
		return INT_MAX;
	}
	if(ans>=pow(2,31) && sign==false){
		return INT_MIN;
	}
	return sign ? ans : (-1*ans);
}
int main(){
	int dividend=22;
	int divisor=3;
	int ans=func(dividend,divisor);
	cout<<ans<<endl;
}
