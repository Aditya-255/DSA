#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int i,int n){
	if(i==n){
		return ;
	}
	int j=i;
	while(j>0 && arr[j-1]>=arr[j]){
		swap(arr[j-1],arr[j]);
		j--;
	}
	insertion_sort(arr,i+1,n);
}
int main(){
	int n=5;
	int arr[n]={13,46,24,20,52};
	insertion_sort(arr,0,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
