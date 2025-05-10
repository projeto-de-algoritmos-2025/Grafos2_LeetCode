class Solution {
public:
    struct DSU {
        vector<int> parent, rank;
        DSU(int n) : parent(n), rank(n, 0) {
            iota(parent.begin(), parent.end(), 0);
        }
        int find(int x) {
            if (x != parent[x]) parent[x] = find(parent[x]);
            return parent[x];
        }
        bool unite(int x, int y) {
            int xr = find(x), yr = find(y);
            if (xr == yr) return false;
            if (rank[xr] < rank[yr]) swap(xr, yr);
            parent[yr] = xr;
            if (rank[xr] == rank[yr]) rank[xr]++;
            return true;
        }
    };

    int kruskal(int n, vector<vector<int>>& edges, int skip = -1, int force = -1) {
        DSU dsu(n);
        int weight = 0;
        if (force != -1) {
            auto& e = edges[force];
            dsu.unite(e[0], e[1]);
            weight += e[2];
        }
        for (int i = 0; i < edges.size(); ++i) {
            if (i == skip) continue;
            auto& e = edges[i];
            if (dsu.unite(e[0], e[1])) {
                weight += e[2];
            }
        }
        int root = dsu.find(0);
        for (int i = 1; i < n; ++i) {
            if (dsu.find(i) != root) return INT_MAX;
        }
        return weight;
    }

    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        int m = edges.size();
        for (int i = 0; i < m; ++i) edges[i].push_back(i);

        sort(edges.begin(), edges.end(), [](auto& a, auto& b) {
            return a[2] < b[2];
        });

        int minWeight = kruskal(n, edges);

        vector<int> critical, pseudo;
        for (int i = 0; i < m; ++i) {
            if (kruskal(n, edges, i) > minWeight)
                critical.push_back(edges[i][3]);
            else if (kruskal(n, edges, -1, i) == minWeight)
                pseudo.push_back(edges[i][3]);
        }

        return {critical, pseudo};
    }
};
