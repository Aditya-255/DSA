#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={5,3,2,4,1};
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
