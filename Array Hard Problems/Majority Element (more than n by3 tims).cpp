#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=8;
	int arr[n]={1,1,1,3,3,2,2,2};
	int cnt1=0,cnt2=0;
	int el1=INT_MIN,el2=INT_MIN;
	for(int i=0;i<n;i++){
		if(cnt1==0 && el2!=arr[i]){
			cnt1=1;
			el1=arr[i];
		}
		else if(cnt2==0 && el1!=arr[i]){
			cnt2=1;
			el2=arr[i];
		}
		else if(arr[i]==el1){
			cnt1++;
		}
		else if(arr[i]==el2){
			cnt2++;
		}
		else{
			cnt1--;
			cnt2--;
		}
	}
	vector<int> ls;
	cnt1=0,cnt2=0;
	for(int i=0;i<n;i++){
		if(el1==arr[i]) cnt1++;
		if(el2==arr[i]) cnt2++;
	}
	int mini=(int)(n/3)+1;
	if(cnt1>=mini){
		ls.push_back(el1);
	}
	if(cnt2>=mini){
		ls.push_back(el2);
	}
	for(int i=0;i<ls.size();i++){
		cout<<ls[i]<<" ";
	}
}
