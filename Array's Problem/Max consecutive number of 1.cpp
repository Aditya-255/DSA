#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=9;
	int arr[n]={1,1,0,1,1,1,0,1,1};
	int c=0;
	int maxi=0;
	for(int i=0;i<n;i++){
		if(arr[i]==1){
			c++;
			maxi=max(maxi,c);
		}
		else{
			c=0;
		}
	}
	cout<<maxi<<endl;
}
