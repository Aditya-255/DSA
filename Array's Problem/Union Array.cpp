#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr1[]={1,1,2,3,4,5};
	int arr2[]={2,3,4,4,5,6};
	int n1=sizeof(arr1)/sizeof(arr1[0]);
	int n2=sizeof(arr2)/sizeof(arr2[0]);
	int i=0;
	int j=0;
	vector<int> Unionarr;
	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
			if(Unionarr.size()==0 || Unionarr.back()!=arr1[i]){
				Unionarr.push_back(arr1[i]);
			}
			i++;
		}
		else{
			if(Unionarr.size()==0 || Unionarr.back()!=arr2[j]){
				Unionarr.push_back(arr2[j]);
			}
			j++;
		}
	}
	while(i<n1){
		if(Unionarr.size()==0 || Unionarr.back()!=arr1[i]){
				Unionarr.push_back(arr1[i]);
			}
			i++;
	}
	while(j<n2){
		if(Unionarr.size()==0 || Unionarr.back()!=arr2[j]){
				Unionarr.push_back(arr2[j]);
			}
			j++;
	}
	for(int k=0;k<Unionarr.size();k++){
		cout<<Unionarr[k]<<" ";
	}
}
