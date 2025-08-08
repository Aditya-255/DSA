#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,2,3,3,4,5,6};
	int b[]={2,3,3,5,6,6,7};
	int n1=sizeof(a)/sizeof(a[0]);
	int n2=sizeof(b)/sizeof(b[0]);
// brute forse approch
//	int i=0;
//	vector<int> vis(n2,0);
//	vector<int> intersectionarr;
//	while(i<n1){
//		for(int j=0;j<n2;j++){
//			if(a[i]==b[j]&&vis[j]==0){
//				intersectionarr.push_back(a[i]);
//				vis[j]=1;
//				break;
//			}
//		}
//		i++;
//	}
//	for(int k=0;k<intersectionarr.size();k++){
//		cout<<intersectionarr[k]<<" ";
//	}

	vector<int> ans;
	int i=0,j=0;
	
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			i++;
		}
		else if(b[j]<a[i]){
			j++;
		}
		else{
			ans.push_back(a[i]);
			i++;
			j++;
		}
		
	}
	for(int k=0;k<ans.size();k++){
		cout<<ans[k]<<" ";
	}
}
