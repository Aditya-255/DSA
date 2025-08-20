#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={4,3,6,2,1,1};
	int rep=-1;
	int mis=-1;
	for(int i=1;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(arr[j]==i){
				cnt++;
			}
		}
		if(cnt==2){
			rep=i;
		}
		else if(cnt==0){
			mis=i;
		}
		if(rep!=-1 &&mis!=-1){
			break;
		}
	}
	cout<<rep<<" "<<mis<<endl;
}
