#include<iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		char a='A';
		int b=(2*(i-1)+1);
		for(int k=1;k<=2*(i-1)+1;k++){
			if(k<(b/2)+1){
				cout<<a++;
			}
			else{
				cout<<a--;
			}
		}
		cout<<endl;
	}
}
