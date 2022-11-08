#include "bits/stdc++.h"
using namepsace std;
//Adjacency List representation of graphs in C++
int main()
{
	//n -> nodes, m-> edges
	int n, m; cin >> n >> m;
	vector<int> adj[n + 1];

	for (int i = 0; i < m; ++i)
	{
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	adj.clear();
	return 0;
}