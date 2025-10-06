#include <bits/stdc++.h>
using namespace std;

vector<string> results;

void solve(string num, int target, int index, long long value, long long last, string expr) {
    if (index == num.size()) {
        if (value == target) {
            results.push_back(expr);
        }
        return;
    }

    for (int i = index; i < num.size(); i++) {
        if (i > index && num[index] == '0') break;

        string part = num.substr(index, i - index + 1);

        long long curr;
        stringstream ss(part); 
        ss >> curr;

        if (index == 0) {
            solve(num, target, i + 1, curr, curr, part);
        } else {
            solve(num, target, i + 1, value + curr, curr, expr + "+" + part);
            solve(num, target, i + 1, value - curr, -curr, expr + "-" + part);
            solve(num, target, i + 1, value - last + last * curr, last * curr, expr + "*" + part);
        }
    }
}

vector<string> addOperators(string num, int target) {
    results.clear();
    string expr = "";
    solve(num, target, 0, 0, 0, expr);
    return results;
}

int main() {
    string num;
    int target;

    cout << "Enter number string: ";
    cin >> num;

    cout << "Enter target value: ";
    cin >> target;

    vector<string> expressions = addOperators(num, target);

    cout << "\nPossible expressions that equal " << target << ":\n";
    if (expressions.empty()) {
        cout << "No valid expressions found.\n";
    } else {
        for (int i = 0; i < expressions.size(); i++) {
    		cout << expressions[i] << endl;
		}

    }
}

