#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=1;i<=2*n-1;i++){
		int sp,st;
		if(i<=n){
			sp=n-i;
			st=2*i-1;
		}
		else{
			sp=i-n;
			st=2*(n-(i-n))-1;
		}
		for(int j=1;j<=sp;j++){
			cout<<" ";
		}
		for(int k=1;k<=st;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}
