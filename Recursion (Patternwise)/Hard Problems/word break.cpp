#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    set<string> dict(wordDict.begin(), wordDict.end());
    int n = s.size();
    vector<bool> dp(n + 1, false);

    dp[0] = true; 

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            string word = s.substr(j, i - j);
            if (dp[j] && dict.count(word)) {
                dp[i] = true;
                break; 
            }
        }
    }
    return dp[n];   // ? correctly placed OUTSIDE the loops
}

int main() {
    string s = "leetcode";
    vector<string> wordDict;
    wordDict.push_back("leet");
	wordDict.push_back("code");
    if (wordBreak(s, wordDict)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

