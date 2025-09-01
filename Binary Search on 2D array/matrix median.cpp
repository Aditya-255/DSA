#include<bits/stdc++.h>
using namespace std;
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
    
    vector<int> ans;
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		ans.push_back(mat[i][j]);
		}
	}
	sort(ans.begin(),ans.end());
	cout<<ans[(m*n)/2]<<endl;
}
