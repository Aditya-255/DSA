#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	int age;
	cin>>age;
	if(age>=18){
		cout<<"adult"<<endl;
	}
	else{
		cout<<"not adult"<<endl;
	}
	*/
//	int mark;
//	cin>>mark;
//	if(mark<25){
//		cout<<"F";
//	}
//	else if( mark<=44){
//		cout<<"E";
//	}
//	else if( mark<=49){
//		cout<<"D";
//	}
//	else if( mark<=59){
//		cout<<"C";
//	}
//	else if( mark<=79){
//		cout<<"B";
//	}
//	else if( mark<=100){
//		cout<<"A";
//	}
	int age;
	cin>>age;
	if(age<18){
		cout<<"not eligible for job";
	}
	else if( age<=54){
		cout<<"eligible for job";
	}
	else if(age<=57){
		cout<<"eligible for job but retirment soon";
	}
	else{
		cout<<"retirement time";
	}
}
