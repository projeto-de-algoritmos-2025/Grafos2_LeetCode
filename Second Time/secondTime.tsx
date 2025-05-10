function secondMinimum(n: number, edges: number[][], time: number, change: number): number {
    const graph: number[][][] = Array.from({ length: n + 1 }, () => []);
    for (const [u, v] of edges) {
        graph[u].push([v]);
        graph[v].push([u]);
    };
    
    function getWaitTime(currentTime: number): number {
        const cycle = 2 * change;
        const modTime = currentTime % cycle;
        if (modTime < change) {
            return 0;
        }
        return cycle - modTime;
    }

    // dijkstra
    const dist = Array(n + 1).fill(Infinity);
    const secondDist = Array(n + 1).fill(Infinity);
    dist[1] = 0;
    const queue: [number, number][] = [[0, 1]];

    while (queue.length > 0) {
        const [currentTime, u] = queue.shift()!;
        
        for (const [v] of graph[u]) {
            const waitTime = getWaitTime(currentTime);
            const newTime = currentTime + time + waitTime;

            if (newTime < dist[v]) {
                dist[v] = newTime;
                queue.push([newTime, v]);
            } else if (newTime < secondDist[v] && newTime > dist[v]) {
                secondDist[v] = newTime;
                queue.push([newTime, v]);
            }
        }
    }
    return secondDist[n];
}