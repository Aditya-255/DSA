#include<bits/stdc++.h>
using namespace std;
bool palindrome(string a,int i,int n){
	if(i>=n/2){
		return true;
	}
	if(a[i]!=a[n-i-1]){
		return false;
	}
	palindrome(a,i+1,n);
}
int main(){
	string a="aba";
	
	if(palindrome(a,0,3)){
		cout<<"string is Palindrome"<<endl;
	}
	else{
		cout<<"string is not Palindrome"<<endl;
	}
}
