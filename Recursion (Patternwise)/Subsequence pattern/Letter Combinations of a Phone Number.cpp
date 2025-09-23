#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void backtrack(string &digits, int index, string &path) {
        if (index == digits.size()) {
            ans.push_back(path);
            return;
        }

        string letters = mapping[digits[index] - '0'];
        for (int i = 0; i < letters.size(); i++) {
            path.push_back(letters[i]);
            backtrack(digits, index + 1, path);
            path.erase(path.size() - 1, 1);
        }
    }
vector<string> solve(string digits) {
         if (digits.empty()) return {};
        string path = "";
        backtrack(digits, 0, path);
        return ans;
    }
int main(){
    string digits="23";
    vector<string> ans=solve(digits);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
