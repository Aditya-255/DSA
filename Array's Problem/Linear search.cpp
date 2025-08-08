#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={6,7,4,5,1};
	int num=4;
	int j=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			j=i;
		}
	}
	cout<<j<<" ";
}
