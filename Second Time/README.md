# [Second Minimum Time to Reach Destination](https://leetcode.com/problems/second-minimum-time-to-reach-destination/description)

Uma cidade é representada como um grafo conectado bidirecional com `n` vértices, onde cada vértice é rotulado de `1` a `n` (inclusive). As arestas no grafo são representadas como um array de inteiros 2D `edges`, onde cada `edges[i] = [ui, vi]` denota uma aresta bidirecional entre vértice `ui` e vértice `vi`. Cada par de vértices é conectado por, no máximo, uma aresta, e nenhum vértice possui uma aresta para si mesmo. O tempo necessário para percorrer qualquer aresta é de `time` minutos.

Cada vértice tem um semáforo que muda de cor de verde para vermelho e vice-versa a cada `change` minutos. Todos os semáforos mudam ao mesmo tempo. Você pode entrar em um vértice a qualquer momento, mas só pode sair dele quando o sinal estiver verde. Você não pode esperar em um vértice se o sinal estiver verde.

O segundo valor mínimo é definido como o menor valor estritamente maior que o valor mínimo.

- Por exemplo, o segundo valor mínimo de `[2, 3, 4]` é `3`, e o segundo valor mínimo de `[2, 2, 4]` é `4`.

Dado `n`, `edges`, `time`, e `change`, retorna o segundo tempo mínimo que levará para ir de vértice `1` a vértice `n` .

Notas:

- Você pode passar por qualquer vértice quantas vezes quiser, incluindo `1` e `n`.
- Você pode presumir que quando a viagem começa, todos os sinais ficam verdes.

## Screenshots

### Caso 1

![Case1](/Second%20Time/assets/img/caso1.png)

### Caso 2

![Case2](/Second%20Time/assets/img/caso2.png)

### Submissão

![Submission](/Second%20Time/assets/img/submissao.png)
