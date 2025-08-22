#include<bits/stdc++.h>
using namespace std;
    int minimumArea(vector<vector<int> >& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i=0,j=0;
        int hei=0,wei=0;
        while(i<n || j<m){
            if(grid[i][j]==1){
                if(hei==i && wei!=j){
                    hei++;
                    wei++;
                }
                else{
                    wei++;
                }
            }
            i++;
            j++;
        }
        int ans=hei*wei;
        return ans;
    }
int main(){
	vector<vector<int> > grid;
	grid[0].push_back(0);
	grid[0].push_back(1);
	grid[0].push_back(0);
	
	grid[1].push_back(1);
	grid[1].push_back(0);
	grid[1].push_back(1);
	
	int answer=minimumArea(grid);
	cout<<answer<<endl;
}

