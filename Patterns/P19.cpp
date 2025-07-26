#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=1;i<=2*n;i++){
		int st,sp;
		if(i<=n){
			st=n-(i-1);
			sp=2*(i-1);
		}
		else{
			st=i-n;
			sp=2*(2*n-i);
		}
		for(int j=1;j<=st;j++){
			cout<<"*";
		}
		for(int k=1;k<=sp;k++){
			cout<<" ";
		}
		for(int j=1;j<=st;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
