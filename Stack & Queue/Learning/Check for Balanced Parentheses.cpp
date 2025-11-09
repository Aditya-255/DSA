#include<bits/stdc++.h>
using namespace std;
bool func(string s){
	stack<char> ss;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			ss.push(s[i]);
		}
		else{
			if(ss.empty()){
				return false;
			}
			char ch=ss.top();
			ss.pop();
			if(s[i]==')'&& ch!='(' 
			||s[i]==']'&& ch!='['
			||s[i]=='}'&& ch!='{'){
				return false;
			}
		}
	}
	return ss.empty();
}
int main(){
	 string s="(){[][}";

    if (func(s))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}
