#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=5;
	int arr[n]={1,2,1,3,4};
	bool issort;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1]){
			issort=true;
		}
		else{
			issort=false;
			break;
		}
	}
	if(issort){
		cout<<"Array is sorted"<<endl;
	}
	else{
		cout<<"Array is not sorted"<<endl;
	}
}
