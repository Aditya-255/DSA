#include<iostream>
using namespace std;
int main(){
	int n=4;
	for(int i=1;i<=2*n-1;i++){
		for(int j=1;j<=2*n-1;j++){
			int top=i-1;
			int left=j-1;
			int right=(2*n-2)-(j-1);
			int down=(2*n-2)-(i-1);
			cout<<(n-(min(min(top,down),min(left,right))));
		}
		cout<<endl;
	}
}
