#include<bits\stdc++.h>
using namespace std;
int main(){
	int a=11;
	int b=13;
	while(a>0 && b>0){
		if(a>b){
			a=a%b;
		}
		else{
			b=b%a;
		}
		
	}
	if(a==0){
			cout<<"GCD/HCF is "<<b<<endl;
		}
		else{
			cout<<"GCD/HCF is "<<a<<endl;
		}
}
