class Graph {
public:
    vector<vector<pair<int, int>>> graph;

    Graph(int n, vector<vector<int>>& edges) {
        graph.resize(n);
        for (auto& edge : edges) {
            graph[edge[0]].emplace_back(edge[1], edge[2]);
        }
    }

    void addEdge(vector<int> edge) {
        graph[edge[0]].emplace_back(edge[1], edge[2]);
    }

    int shortestPath(int node1, int node2) {
        vector<int> dist(graph.size(), INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        dist[node1] = 0;
        pq.emplace(0, node1);

        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if (d != dist[u]) continue;

            for (auto edge : graph[u]) {
                int v = edge.first;
                int cost = edge.second;

                if (dist[u] + cost < dist[v]) {
                    dist[v] = dist[u] + cost;
                    pq.emplace(dist[v], v);
                }
            }
        }

        return dist[node2] == INT_MAX ? -1 : dist[node2];
    }
};
