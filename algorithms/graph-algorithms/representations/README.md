# Graph and its representations

## `Adjacency matrix`
**Adjacency matrix** is a 2D array of size `V x V` where `V` is the number of vertices in a graph. Let the 2D array be `adj[][]`, a slot `adj[i][j] = 1` indicates that there is an edge from vertex `i` to vertex `j`. Adjacency matrix for undirected graph is always symmetric. Adjacency Matrix is also used to represent weighted graphs. If `adj[i][j] = w`, then there is an edge from vertex `i` to vertex `j` with weight `w`.

Adjacency matrix [example](./repres_graph_adj_matrix.cpp)

### Pros
* Representation is easier to implement and follow.
* Removing an edge takes `O(1)` time.
* Queries like whether there is an edge from vertex `u` to vertex `v` are efficient and can be done `O(1)`.

### Cons
* Takes space `O(V²)`.
* Even if the graph is sparse(contains less number of edges), it consumes the same space.
* Adding a vertex is `O(V²)` time.

## `Adjacency list`
An array of lists is used. The size of the array is equal to the number of vertices. Let the array be an `array[]`. An entry `array[i]` represents the list of vertices adjacent to the `i`-th vertex. This representation can also be used to represent a weighted graph. The weights of edges can be represented as lists of pairs.

Adjacency list [example](./repres_graph_adj_list.cpp)

### Pros
* Takes space `O(|V|+|E|)`.
* In the worst case, there can be `C(V, 2) = |V| * (|V| - 1) / 2` number of edges in a graph thus consuming `O(V²)` space.
* Adding a vertex is easier.

### Cons
* Queries like whether there is an edge from vertex `u` to vertex `v` are not efficient and can be done `O(V)`.
