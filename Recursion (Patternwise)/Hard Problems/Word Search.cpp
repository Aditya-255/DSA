#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<char> >& board, string& word, int i, int j, int idx){
        if(idx == word.size()) return true; 
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() 
           || board[i][j] != word[idx]) return false;

        char temp = board[i][j];
        board[i][j] = '#'; 

        bool found = dfs(board, word, i+1, j, idx+1) ||  
                     dfs(board, word, i-1, j, idx+1) ||  
                     dfs(board, word, i, j+1, idx+1) ||  
                     dfs(board, word, i, j-1, idx+1);    

        board[i][j] = temp;
        return found;
}
bool exist(vector<vector<char> >& board, string word) {
        int rows = board.size(), cols = board[0].size();

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
int main(){
	 vector<vector<char> > board;
    vector<char> row1;
    row1.push_back('A');
    row1.push_back('B');
    row1.push_back('C');
    row1.push_back('E');
    board.push_back(row1);

    vector<char> row2;
    row2.push_back('S');
    row2.push_back('F');
    row2.push_back('C');
    row2.push_back('S');
    board.push_back(row2);

    vector<char> row3;
    row3.push_back('A');
    row3.push_back('D');
    row3.push_back('E');
    row3.push_back('E');
    board.push_back(row3);



    string word = "ABCCED";

    if(exist(board, word)) {
        cout << "Word Found" << endl;
    } else {
        cout << "Word Not Found" << endl;
    }
}
