#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=3;
	int m=64;
	int low=1,high=m;
	while(low<=high){
		int mid=(low+high)/2;
		if(pow(mid,n)==m){
			cout<<mid<<endl;
			break;
		}
		else if(pow(mid,n)>m){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
}
