#include<bits\stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int revnum=0;
	while(n>0){
		int digit=n%10;
		n=n/10;
		revnum=(revnum*10)+digit;
	}
	cout<<"Reverse number is: "<<revnum<<endl;
}
