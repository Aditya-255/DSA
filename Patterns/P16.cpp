#include<iostream>
using namespace std;
int main(){
	char a='A';
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<a;
		}
		a++;
		cout<<endl;
	}
}
