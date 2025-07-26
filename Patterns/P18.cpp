#include<iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=1;i<=n;i++){
		char a='E'-(i-1);
		for(int j=1;j<=i;j++){
			cout<<a++;
		}
		cout<<endl;
	}
}
