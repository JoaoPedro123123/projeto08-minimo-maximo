Projeto 08 — Busca de Mínimo e Máximo

Objetivo

O objetivo deste projeto é implementar e comparar duas estratégias para encontrar simultaneamente o menor e o maior elemento de um vetor, utilizando a linguagem C.

A análise será realizada com base no número de comparações executadas por cada algoritmo, relacionando os resultados experimentais com a complexidade de tempo.

Métodos implementados

Método A — Direto

O algoritmo percorre o vetor para encontrar o menor elemento e, em seguida, realiza outra varredura para encontrar o maior elemento.

O número de comparações entre os elementos é dado por:

2(n − 1)

Método B — Por pares

O algoritmo processa os elementos dois a dois. Primeiro, compara os elementos de cada par entre si e, depois, compara o menor e o maior do par com os valores mínimo e máximo globais.

Para um vetor de tamanho par, o número de comparações é:

3n/2 − 2

Análise de complexidade

Os dois métodos possuem complexidade temporal Θ(n), pois a quantidade de operações cresce linearmente em relação ao tamanho do vetor.

Apesar de pertencerem à mesma classe de complexidade, o método por pares tende a realizar menos comparações, demonstrando a importância das constantes multiplicativas na análise de algoritmos.

Experimentos

O programa será executado com um vetor de 10.000 elementos.

Durante os testes, serão registrados:

* O menor valor encontrado.
* O maior valor encontrado.
* A quantidade de comparações realizadas por cada método.

Os resultados dos dois algoritmos serão comparados para verificar a correção das implementações e avaliar a diferença no número de comparações.

Tecnologias utilizadas

* Linguagem C.
* GitHub para organização e versionamento do código.

Integrantes

* João Pedro Caetano
* Leonardo Sampaio
* Lucas Fernandes de Carvalho

Conclusão

O projeto busca demonstrar experimentalmente que diferentes estratégias podem resolver o mesmo problema com custos operacionais distintos.

A comparação entre os métodos permitirá observar como a organização das operações influencia o número de comparações, mesmo quando ambos apresentam complexidade temporal linear.
