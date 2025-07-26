#include<iostream>
using namespace std;
int main(){
	int n=4;
	for(int i=1;i<=n;i++){
		int sp=2*n-2*i;
			for(int j=1;j<=i;j++){
				cout<<j;
			}
			for(int k=1;k<=sp;k++){
				cout<<" "; 
			}
			for(int j=i;j>=1;j--){
				cout<<j;
			}
			cout<<endl;
		}
}
