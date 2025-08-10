#include<bits/stdc++.h>
using namespace std;

int main(){
	int n=5;
	int arr[n]={1,2,4,5,6};
	int N=6;
	
// mising number in arr is  1 number mising 
//	int sum=0;
//	for(int i=1;i<=N;i++){
//		sum+=i;
//	}
//	int arrsum=0;
//	for(int i=0;i<n;i++){
//		arrsum+=arr[i];
//	}
//	int ans=sum-arrsum;
//	if(ans==0){
//		cout<<"all num is present"<<endl;
//	}
//	else{
//		cout<<"mising number is "<<ans<<endl;
//	}

	int xor1=0;
	int xor2=0;
	for(int i=0;i<n;i++){
		xor2=xor2^arr[i];
		xor1=xor1^(i+1);
	}
	xor1=xor1^N;
	
	int ans=xor1^xor2;
	cout<<ans<<endl;
}
