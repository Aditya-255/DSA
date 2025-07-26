#include<iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=1;i<2*n;i++){
		int st,sp;
		if(i<=n){
			st=i;
			sp=2*(n-i);
		}
		else{
			st=2*n-i;
			sp=2*(i-n);
		}
		for(int j=1;j<=st;j++){
			cout<<"*";
		}
		for(int j=1;j<=sp;j++){
			cout<<" ";
		}
		for(int j=1;j<=st;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
