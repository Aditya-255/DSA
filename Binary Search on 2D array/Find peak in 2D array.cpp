#include <bits/stdc++.h>
using namespace std;
int maxele(vector<vector<int> > &mat,int n,int m,int mid){
	int maxval=-1;
	int ind=-1;
	for(int i=0;i<n;i++){
		if(mat[i][mid]>maxval){
			maxval=mat[i][mid];
			ind =i;
		}
	}
	return ind;
}
vector<int> ans(vector<vector<int> > &mat,int n,int m){
	int low=0,high=m-1;
	while(low<=high){
		int mid=(low+high)/2;
		int maxi=maxele(mat,n,m,mid);
		int left=mid-1>=0 ? mat[maxi][mid-1] : -1;
		int right=mid+1<m ? mat[maxi][mid+1] : -1;
		if(mat[maxi][mid]>left && mat[maxi][mid]>right){
			vector<int> res;
            res.push_back(maxi);
            res.push_back(mid);
            return res;
		}
		else if(mat[maxi][mid]<left){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	vector<int> res;
    res.push_back(-1); 
    res.push_back(-1);
    return res;
}
int main() {
    vector<vector<int> > mat;

    vector<int> r1;
    r1.push_back(4);
    r1.push_back(2);
    r1.push_back(5);
    r1.push_back(1);
    r1.push_back(4);
    r1.push_back(5);

    vector<int> r2;
    r2.push_back(2);
    r2.push_back(9);
    r2.push_back(5);
    r2.push_back(2);
    r2.push_back(3);
    r2.push_back(2);

    vector<int> r3;
    r3.push_back(1);
    r3.push_back(7);
    r3.push_back(6);
    r3.push_back(0);
    r3.push_back(1);
    r3.push_back(3);

    vector<int> r4;
    r4.push_back(3);
    r4.push_back(6);
    r4.push_back(2);
    r4.push_back(3);
    r4.push_back(7);
    r4.push_back(2);

    mat.push_back(r1);
    mat.push_back(r2);
    mat.push_back(r3);
    mat.push_back(r4);

    int n=mat.size();
    int m=mat[0].size();
      vector<int> res = ans(mat,n,m);
    cout << "Peak found at row = " << res[0] 
         << ", col = " << res[1] 
         << " (value = " << mat[res[0]][res[1]] << ")" << endl;

    return 0;
}

