#include<bits/stdc++.h>
using namespace std;
void print(int i,int sum){
	if(i<1){
		cout<<sum<<endl;
		return ;
	}
	print(i-1,sum+i);
}
int  funcprint(int n){
	if(n==0){
		return 0;
	}
	return n+funcprint(n-1);
}

int main(){
	int i=3;
	int sum=0;
	print(i,sum);
	int n=3;
	int ans=funcprint(n);
	cout<<ans<<endl;
}
