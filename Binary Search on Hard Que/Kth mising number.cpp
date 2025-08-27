#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={2,3,4,7,11};
	int k=5;
	for(int i=0;i<n;i++){
		if(arr[i]<=k){
			k++;
		}
		else{
			break;
		}
	}
	cout<<k<<endl;
}
