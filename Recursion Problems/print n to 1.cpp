#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
	if(n<i){
		return;
	}
	cout<<n<<endl;
	print(i,n-1);
}
void Backtrack(int i,int n){
	if(i>n){
		return ;
	}  
	Backtrack(i+1,n);
	cout<<i<<endl;
}
int main(){
	int n;
	cin>>n;
	print(1,n);
	Backtrack(1,n);
}
