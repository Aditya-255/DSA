#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int arr[n]={40,25,19,12,9,6,2};
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int temp=2*arr[j];
			if(arr[i]>temp){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
