#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=13;
	int i=2;
	if((n&(1<<i))!=0){
		cout<<"n is set"<<endl;
	}
	else{
		cout<<"n is not set"<<endl;
	}
}
