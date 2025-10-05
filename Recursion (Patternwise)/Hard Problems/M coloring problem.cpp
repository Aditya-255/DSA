#include<bits/stdc++.h>
using namespace std;
bool isSafe(int node, int col, vector<vector<int> >& graph, vector<int>& color, int n) {
    for (int k = 0; k < n; k++) {
        if (graph[node][k] == 1 && color[k] == col)
            return false;
    }
    return true;
}
bool solve(int node, vector<vector<int> >& graph, int m, int n, vector<int>& color) {
    if (node == n)
        return true;
    for (int col = 1; col <= m; col++) {
        if (isSafe(node, col, graph, color, n)) {
            color[node] = col;  
		if (solve(node + 1, graph, m, n, color))
            return true;
        color[node] = 0;
        }
    }
    return false; 
}

int main(){
	int n, m;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of colors: ";
    cin >> m;

    vector<vector<int> > graph(n, vector<int>(n));
    cout << "Enter adjacency matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    vector<int> color(n, 0);

    if (solve(0, graph, m, n, color)) {
        cout << "\nSolution exists!\nAssigned colors:\n";
        for (int i = 0; i < n; i++)
            cout << "Vertex " << i << " -> Color " << color[i] << endl;
    } else {
        cout << "\nSolution does not exist!\n";
    }

}
