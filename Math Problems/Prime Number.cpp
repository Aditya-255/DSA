#include<bits\stdc++.h>
using namespace std;
int main(){
//	int c=0;
//	int n;
//	cin>>n;
//	bool isPrime=true;
//	for(int i=1;i<=n;i++){
//		if(n%i==0){
//			c++;
//		}
//		bool isPrime;
//		if(c==2){
//			isPrime=false;
//		}
//		else{
//			isPrime=true;
//		}
//	}
//	if(isPrime){
//		cout<<"Prime Number"<<endl;
//	}
//	else{
//		cout<<"Not Prime Number"<<endl;
//	}
	
	int no=13;
	int cnt=0;
	for(int i=1;i<=sqrt(no);i++){
		if(no%i==0){
			cnt++;
			if(no/i !=i){
				cnt++;
			}
		}
	}
	if(cnt==2){
		cout<<"Prime Number"<<endl;
	}
	else{
		cout<<"not Prime number"<<endl;
	}
}
