#include<bits/stdc++.h>
using namespace std;
int conv(string n){
	int len=n.size();
	int p2=1;
	int num=0;
	for(int i=len-1;i>=0;i--){
		if(n[i]=='1'){
			num=num+p2;
		}
		p2=p2*2;
	}
	return num;
}
int main(){
	string n="1101";
	int ans=conv(n);
	cout<<ans<<endl;
}
