#include<bits/stdc++.h>
using namespace std;
int func(int arr[][4],int n,int m){
	int knowme[n];
	int iknow[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1){
				knowme[j]++;
				iknow[i]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(knowme[i]==n-1&& iknow[i]==0){
			return i;
		}
	}
	return -1;
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
