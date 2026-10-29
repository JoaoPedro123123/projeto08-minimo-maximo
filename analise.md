# Análise Teórica — Projeto 08
## Método A — Direto
O algoritmo realiza duas varreduras independentes:
uma para encontrar o mínimo e outra para encontrar o máximo.
Número de comparações:
T(n) = 2(n - 1)
Complexidade temporal: Θ(n).
## Método B — Por pares
O algoritmo compara os elementos dois a dois e atualiza
o mínimo e o máximo globais.
Para n par:
T(n) = 3n/2 - 2
Complexidade temporal: Θ(n).
## Comparação
Para n = 10000, os valores teóricos esperados são:
- Método A: 19998 comparações.
- Método B: 14998 comparações.
Os resultados experimentais serão adicionados após
a execução e validação do programa.
