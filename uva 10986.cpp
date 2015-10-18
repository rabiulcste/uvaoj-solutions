#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

typedef pair< int, int > pii;

/*
Set MAX according to the number of nodes in the graph. Remember,
nodes are numbered from 1 to N. Set INF according to what is the
maximum possible shortest path length going to be in the graph.
This value should match with the default values for d[] array.
*/
const int MAX = 20010;
const int INF = 0x3f3f3f3f;

/*
pair object for graph is assumed to be (node, weight). d[] array
holds the shortest path from the source. It contains INF if not
reachable from the source.
*/
vector< pii > G[MAX];
int d[MAX];

void dijkstra(int start) {
    int u, v, i, c, w;

    priority_queue< pii, vector< pii >, greater< pii > > Q;

    /*
    Reset the distance array and set INF as initial value. The
    source node will have weight 0. We push (0, start) in the
    priority queue as well that denotes start node has 0 weight.
    */
    memset(d, INF, sizeof d);
    Q.push(pii(0, start));
    d[start] = 0;

    // As long as queue is not empty, check each adjacent node of u
    while(!Q.empty()) {
        u = Q.top().second; // node
        c = Q.top().first; // node cost
        Q.pop(); // remove the top item.

        /*
        We have discarded the visit array as we do not need it.
        If d[u] has already a better value than the currently
        popped node from queue, discard the operation on this node.
        */
        if(d[u] < c) continue;

        /*
        In case you have a target node, check if u == target node.
        If yes you can early return d[u] at this point.
        */

        /*
        Traverse the adjacent nodes of u. Remember, for the graph,
        the pair is assumed to be (node, weight).
        */
        for(i = 0; i < G[u].size(); i++) {
            v = G[u][i].first; // node
            w = G[u][i].second; // edge weight

            // Relax only if it improves the already computed shortest path weight.

            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                Q.push(pii(d[v], v));
            }
        }
    }
}

int main() {
    int test, n, e, i, u, v, w, start, dist, kase = 0;
    scanf("%d", &test);
    while(test--) {

        scanf("%d %d %d %d", &n, &e, &start, &dist);
        // Reset the graph
        for(i = 0; i <= n; i++) G[i].clear();

        //Read all the edges. u to v with cost w
        for(i = 0; i < e; i++) {
            scanf("%d %d %d", &u, &v, &w);
            G[u].push_back(pii(v, w));
            G[v].push_back(pii(u, w)); // only if bi-directional
        }

        dijkstra(start);
        if(d[dist] == INF) printf("Case #%d: unreachable\n", ++kase);
        else printf("Case #%d: %d\n", ++kase, d[dist]);
    }
    return 0;
}
