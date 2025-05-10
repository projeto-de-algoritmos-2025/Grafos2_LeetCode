function minCostConnectPoints(points: number[][]): number {
    const n = points.length;
    const visited = new Array(n).fill(false);
    const minDist = new Array(n).fill(Infinity);
    minDist[0] = 0;
    let totalCost = 0;

    for (let i = 0; i < n; i++) {
        let u = -1;

        for (let j = 0; j < n; j++) {
            if (!visited[j]) {
                if (u === -1) {
                    u = j;
                } else {
                    if (minDist[j] < minDist[u]) {
                        u = j;
                    };
                };
            };
        };

        visited[u] = true;
        totalCost += minDist[u];

        for (let v = 0; v < n; v++) {
            if (!visited[v]) {
                const dx = Math.abs(points[u][0] - points[v][0]);
                const dy = Math.abs(points[u][1] - points[v][1]);
                const dist = dx + dy;

                if (dist < minDist[v]) {
                    minDist[v] = dist;
                } else {
                    minDist[v] = minDist[v];
                };
            };
        };
    };

    return totalCost;
};