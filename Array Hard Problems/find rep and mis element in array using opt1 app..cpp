#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={4,3,6,2,2,1};
	int sn=(n*(n+1))/2;
	int sn2=(n*(n+1)*(2*n+1))/6;
	int s=0,s2=0;
	for(int i=0;i<n;i++){
		s+=arr[i];
		s2+=arr[i]*arr[i];
	}
	int val1=s-sn;
	int val2=s2-sn2;
	val2=val2/val1;
	int x=(val1+val2)/2;
	int y=x-val1;
	cout<<x<<" "<<y<<endl;
}
