#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=13;
	int i=2;
//	
	if(n^(1<<i)){
		n=n^(1<<i);
		cout<<n<<endl;
	}
}
