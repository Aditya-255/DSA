#include<bits/stdc++.h>
using namespace std;
int uperbound(vector<int>& v, int x) {
    int low = 0, high = v.size(); 

    while (low < high) {
        int mid = (low + high) / 2;

        if (v[mid] <= x) {
            low = mid + 1;
        } else {
            high = mid;      
        }
    }
    return low;  
}
int blackbox(vector<vector<int> > &mat,int mid){
	int cnt=0;
	int n=mat.size();
	for(int i=0;i<n;i++){
		cnt+=uperbound(mat[i],mid);
	} 
	return cnt;
}
int func(vector<vector<int> > &mat,int n,int m){
	int low=INT_MAX,high=INT_MIN;
	for(int i=0;i<n;i++){
		low=min(low,mat[i][0]);
		high=max(high,mat[i][n-1]);
	}
	int req=(n*m)/2;
	while(low<=high){
		int mid=(low+high)/2;
		int small=blackbox(mat,mid);
		if(small<=req){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return low;
}
int main(){
	vector<vector<int> > mat;

    vector<int> r1;
    r1.push_back(1);
    r1.push_back(5);
    r1.push_back(7);
    r1.push_back(9);
    r1.push_back(11);

    vector<int> r2;
    r2.push_back(2);
    r2.push_back(3);
    r2.push_back(4);
    r2.push_back(5);
    r2.push_back(10);

    vector<int> r3;
    r3.push_back(9);
    r3.push_back(10);
    r3.push_back(12);
    r3.push_back(14);
    r3.push_back(16);

    mat.push_back(r1);
    mat.push_back(r2);
    mat.push_back(r3);
    
    int n=mat.size();
    int m=mat[0].size();
    int ans=func(mat,n,m);
    cout<<ans<<endl;
}
