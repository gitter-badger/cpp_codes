#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100;
typedef pair< int, int > Edge; // to, weight

int main () {
	int n, e, i, j, u, v, w;
	vector< Edge > G[MAX]; // adjacency list for MAX vertices
	while(cin >> n >> e) {
		// n nodes in range [0,n), e edges
		for(i = 0; i < n; i++) G[i].clear(); // forget previous info
		for(i = 0; i < e; i++) {
			// directed edge from u to v with cost w
			cin >> u >> v >> w;
			G[u].push_back(Edge(v, w));
		}
		// now show the graph
		for(i = 0; i < n; i++) {
			cout << "Degree of " << i << ": " << G[i].size() << endl;
			cout << "Adjacents:\n";
			for(j = 0; j < (int)G[i].size(); j++) {
				cout << ' ' << G[i][j].first << "(" << G[i][j].second << ")\n";
			}
			cout << endl;
		}
	}
	return 0;
}
