#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int rev=0;
	int temp=n;
	while(n>0){
		int d=n%10;
		n/=10;
		rev=(rev*10)+d;
	}
	if(rev==temp){
		cout<<"Number is Palindrome"<<endl;
	}
	else{
		cout<<"Number is not Palindrome"<<endl;
	}
}
