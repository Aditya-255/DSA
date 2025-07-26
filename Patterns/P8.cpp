#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=5;i>=1;i--){
		for(int k=1;k<=n-i;k++){
			cout<<" ";
		}
		for(int j=1;j<(2*i-1)+1;j++){
			cout<<"*";
		}
		
		cout<<endl;
	}
}
