# [Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/description)

Dado um grafo conectado não direcionado ponderado com `n` vértices numerados de `0` a `n - 1`, e uma matriz `edges` onde `edges[i] = [ai, bi, weighti]` representa uma aresta bidirecional e ponderada entre os nós `ai` e `bi`. Uma árvore geradora mínima (MST) é um subconjunto das arestas do grafo que conecta todos os vértices sem ciclos e com o menor peso total possível.

Encontre todas as arestas críticas e pseudocríticas na árvore geradora mínima (MST) do grafo fornecido. Uma aresta da MST cuja remoção do grafo causaria um aumento no peso da MST é chamada de aresta crítica. Por outro lado, uma aresta pseudocrítica é aquela que pode aparecer em algumas MSTs, mas não em todas.

Observe que você pode retornar os índices das arestas em qualquer ordem.

## Screenshots

### Caso 1

![Case1](/Find%20Edges/assets/img/caso1.png)

### Caso 2

![Case2](/Find%20Edges/assets/img/caso2.png)

### Submissão

![Submission](/Find%20Edges/assets/img/submissao.png)
