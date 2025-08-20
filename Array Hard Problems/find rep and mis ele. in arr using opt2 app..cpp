#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={4,3,6,2,2,1};
	int xr=0;
	for(int i=0;i<n;i++){
		xr=xr^arr[i];
		xr=xr^(i+1);
	}
	int bitno=0;
	while(1){
		if((xr&(1<<bitno))!=0){
			break;
		}
		bitno++;
	}
	int z=0;
	int o=0;
	for(int i=0;i<n;i++){
		if((arr[i]&(1<<bitno))!=0){
			o=o^arr[i];
		}
		else{
			z=z^arr[i];
		}
	}
	for(int i=1;i<=n;i++){
		if((i&(1<<bitno))!=0){
			o=o^i;
		}
		else{
			z=z^i;
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]==z) cnt++;
	}
	int rep=-1;
	int mis=-1;
	if(cnt==2){
		 rep=z;
		 mis=o;
	}
	else{
		rep=o;
		mis=z;
	}
	cout<<rep<<" "<<mis<<endl;
}
