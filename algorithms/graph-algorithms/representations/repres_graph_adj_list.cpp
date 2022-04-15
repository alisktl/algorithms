#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define newl "\n"
#define newll "\n\n"
#define forn(i, n) for(int i = 0; i < n; i++)

void addEdge(vector<vector<int>> &adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printEdges(vector<vector<int>> adj) {
    int n = adj.size();
    forn(i, n) {

        if(adj[i].size() > 0)
            cout << i << " vertex's adjacency vertices: ";

        int adj_size = adj[i].size();

        for(int j = 0; j < adj_size; j++) {
            int v = adj[i][j];
            cout << v;

            if(j != adj_size-1)
                cout << ", ";
        }

        if(adj_size > 0)
            cout << newl;
    }
}

int main() {
    // n - number of vertices
    int n = 10;

    vector<vector<int>> adj(n);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    cout << "Adjacency List representation:" << newll;
    printEdges(adj);
}