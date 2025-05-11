# [Design Graph With Shortest Path Calculator](https://leetcode.com/problems/design-graph-with-shortest-path-calculator/description)

Existe um grafo ponderado direcionado que consiste em nós numerados de 0 a n - 1. As arestas do grafo são inicialmente representadas pela matriz fornecida edges onde edges[i] = [fromi, toi, edgeCosti] o que significa que tem edge de fromi para toi com custo edgeCosti.

Implementar a classe Graph:

- Graph(int n, int[][] edges) - inicializa o objeto com nós e as arestas fornecidas.
- addEdge(int[] edge) - adiciona uma aresta à lista de arestas onde edge = [from, to, edgeCost]. É garantido que não há aresta entre os dois nós antes de adicionar esta.
- int shortestPath(int node1, int node2) - retorna o custo mínimo de um caminho de node1 até node2. Se não houver caminho, retorna -1. O custo de um caminho é a soma dos custos das arestas do caminho.

## Screenshots

### Caso 1

![Case1](/Find%20Edges/assets/img/caso1.png)

### Submissão

![Submission](/Find%20Edges/assets/img/submissao.png)
