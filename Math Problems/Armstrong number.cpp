#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c=0;
	int temp=n;
	int sum=0;
	int t=n;
	while(t>0){
		t=t/10;
		c++;
	}
	while(n>0){
		int digit=n%10;
		n=n/10;
		sum=sum+pow(digit,c);
	}
	if(sum==temp){
		cout<<"Armstrong number "<<temp<<endl;
	}
	else{
		cout<<"not Armstrong number"<<endl;
	}
}
