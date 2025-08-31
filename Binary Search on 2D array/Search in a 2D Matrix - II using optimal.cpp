#include<bits/stdc++.h>
using namespace std;
bool search2(vector<vector<int> > &matrix,int n,int m,int target){
	int row=0,col=m-1;
	while(row<n && col>=0){
		if(matrix[row][col]==target){
			return true;
		}
		else if(matrix[row][col]<target){
			row++;
		}
		else{
			col--;
		}
	}
	return false;
}
int main(){
	vector<vector<int> > matrix;
	vector<int> r1;
	r1.push_back(1);
	r1.push_back(4);
	r1.push_back(7);
	r1.push_back(11);
	r1.push_back(15);
	vector<int> r2;
	r2.push_back(2);
	r2.push_back(5);
	r2.push_back(8);
	r2.push_back(12);
	r2.push_back(19);
	
	vector<int> r3;
	r3.push_back(3);
	r3.push_back(6);
	r3.push_back(9);
	r3.push_back(16);
	r3.push_back(22);
	
	matrix.push_back(r1);
	matrix.push_back(r2);
	matrix.push_back(r3);
	int n=matrix.size();
	int target=9;
	int m=matrix[0].size();
	if(search2(matrix,n,m,target)){
		cout<<"TRUE"<<endl;
	}
	else{
		cout<<"FALSE"<<endl;
	}
}
