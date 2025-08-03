#include<bits/stdc++.h>
using namespace std;
int main(){
	string a="abcdeagt";
	int hash[26]={0};
	for(int i=0;i<a.size();i++){
		hash[a[i]-'a']++;
	}
	char q;
	cin>>q;
	cout<<hash[q-'a']<<endl;
}
