#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=13;
	int i=2;
	if(n&(~(1<<i))){
		cout<<"clear the i th bit"<<endl;
	}
}
