#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
	if(i>n){
		return ;
	}
	cout<<i<<endl;
	print(i+1,n);
}
void Backtrack(int i,int n){
	if(n<1){
		return ;
	}
	Backtrack(i,n-1);
	cout<<n<<endl;
}
int main(){
	int n;
	cin>>n;
	print(1,n);
	Backtrack(1,n);
}

