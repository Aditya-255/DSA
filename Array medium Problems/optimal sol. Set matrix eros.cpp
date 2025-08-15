#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int> > arr(4); // create 4 empty rows

    arr[0].push_back(1);
    arr[0].push_back(1);
    arr[0].push_back(1);
    arr[0].push_back(1);

    arr[1].push_back(1);
    arr[1].push_back(0);
    arr[1].push_back(1);
    arr[1].push_back(1);

    arr[2].push_back(1);
    arr[2].push_back(1);
    arr[2].push_back(0);
    arr[2].push_back(1);

    arr[3].push_back(0);
    arr[3].push_back(1);
    arr[3].push_back(1);
    arr[3].push_back(1);
    //col=arr[0][..]
    //row=arr[..][0]
    int col0=1;
    for(int i=0;i<arr.size();i++){
    	for(int j=0;j<arr[i].size();j++){
    		if(arr[i][j]==0){
    			arr[i][0]=0;
    			if(j!=0){
    				arr[0][j]=0;
				}
				else{
					col0=0;
				}
			}
		}
	}
	for(int i=1;i<arr.size();i++){
		for(int j=1;j<arr[i].size();j++){
			if(arr[i][j]!=0){
				if(arr[i][0]==0 || arr[0][j]==0){
					arr[i][j]=0;
				}
			}
		}
	}
	if(arr[0][0]==0){
		for(int j=0;j<arr[0].size();j++){
			arr[0][j]=0;
		}
	}
	if(col0==0){
		for(int i=0;i<arr.size();i++){
			arr[i][0]=0;
		}
	}

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

