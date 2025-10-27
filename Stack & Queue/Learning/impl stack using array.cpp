#include<bits/stdc++.h>
using namespace std;
class stimp{
	int top=-1;
	int st[10];
	public:
		void pushh(int x){
			top=top+1;
			st[top]=x;
		}
		int topp(){
			if(top==-1){
				cout << "Stack empty\n";
	            return -1; 
			}	
			return st[top];
		}
		void popp(){
			if(top==-1){
				cout << "Stack underflow\n";
	            return;
			}
			top=top-1;
		}
		int size(){
			return top+1;
		}
};

int main(){
	stimp s;

    s.pushh(10);
    s.pushh(20);
    s.pushh(30);
    
    cout<<s.topp()<<endl;
    cout<<s.size()<<endl;
    
    s.popp();
    cout<<s.topp()<<endl;
}
