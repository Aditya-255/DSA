#include<bits\stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Eneter the number: ";
	cin>>n;
	int c=0;
	
	while(n>0){
		int digit=n%10;
		n=n/10;
		c++;
	}
	cout<<c<<endl;
}
