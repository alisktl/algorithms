#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define newl "\n"
#define newll "\n\n"
#define forn(i, n) for(int i = 0; i < n; i++)

void addEdge(vector<vector<int>> &adjMat, int u, int v) {
    adjMat[u][v] = 1;
    adjMat[v][u] = 1;
}

void printEdges(vector<vector<int>> adjMat) {
    int n = adjMat.size();
    forn(i, n) {
        forn(j, n) {
            if(adjMat[i][j] == 1) {
                cout << i << " -> " << j << newl;
            }
        }
    }
}

int main() {
    // n - number of vertices
    int n = 10;

    vector<vector<int>> adjMat(n, vector<int>(n, 0));

    addEdge(adjMat, 0, 1);
    addEdge(adjMat, 0, 4);
    addEdge(adjMat, 1, 2);
    addEdge(adjMat, 1, 3);
    addEdge(adjMat, 1, 4);
    addEdge(adjMat, 2, 3);
    addEdge(adjMat, 3, 4);

    cout << "Adjacency Matrix representation:" << newll;
    printEdges(adjMat);
}