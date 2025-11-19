#include<bits/stdc++.h>
using namespace std;
int func(int arr[][4],int n,int m){
	int top=0,down=n-1;
	while(top<down){
		if(arr[top][down]==1){
			top=top+1;
		}
		else if(arr[down][top]==1){
			down=down-1;
		}
		else{
			top--;
			down--;
		}
	}
	if(top>down){
		return -1;
	}
	for(int i=0;i<n;i++){
		if(i==top){
			continue;
		}
		if(arr[top][i]==0 && arr[i][top]==1){
			return top;
		}
		else{
			return -1;
		}
	}
}
int main(){
	int arr[4][4] = {
        {0,  1,  1,  0},
        {0,  0,  0,  0},
        {0,  1, 0, 0},
        {1, 1, 0, 0}
    };
    int ans=func(arr,4,4);
    cout<<ans<<endl;
}
