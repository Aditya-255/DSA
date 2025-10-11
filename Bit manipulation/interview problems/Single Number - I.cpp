#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[5]={4,1,2,1,2};
	int xor1=0;
	for(int i=0;i<5;i++){
		xor1=xor1^arr[i];
	}
	cout<<xor1<<endl; 
} 
