#include<bits/stdc++.h>
using namespace std;
void print(string name){
	cout<<name;
}
int sum(int a,int b){
	return a+b;	
} 
//pass by value
void dosomething(int num){
	cout<<num<<endl;
	num++;
}
//pass by refearnce
void dosome(int &num){
	cout<<num<<endl;
	num++;
}
int main(){
	string y="abcdef";
//	print(a);
	int a,b;
	cin>>a>>b;
	int x=sum(a,b);
	cout<<"sum is a "<<x<<endl;
	
	int q=min(a,b);
	cout<<q;
	int num=10;
	dosome(num);
	dosomething(num);
}
