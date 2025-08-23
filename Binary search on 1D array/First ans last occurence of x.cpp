#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=9;
	int arr[n]={2,4,6,8,8,8,9,11,13};
	int x=8;
	int fir=-1,las=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			if(fir==-1){
				fir=i;
			}
			las=i;
		}
	}
	cout<<fir<<" "<<las<<endl;
}
