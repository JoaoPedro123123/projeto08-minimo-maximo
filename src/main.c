#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10000

typedef struct {
int minimo;
int maximo;
long long comparacoes;
} Resultado;

/* Metodo A: duas varreduras independentes */
Resultado metodoDireto(int vetor[], int n) {
Resultado r = {0, 0, 0};

if (n <= 0) {
    return r;
}
r.minimo = vetor[0];
r.maximo = vetor[0];
for (int i = 1; i < n; i++) {
    r.comparacoes++;
    if (vetor[i] < r.minimo) {
        r.minimo = vetor[i];
    }
}
for (int i = 1; i < n; i++) {
    r.comparacoes++;
    if (vetor[i] > r.maximo) {
        r.maximo = vetor[i];
    }
}
return r;

}

/* Metodo B: comparacao dos elementos em pares */
Resultado metodoPares(int vetor[], int n) {
Resultado r = {0, 0, 0};

if (n <= 0) {
    return r;
}
int i;
if (n % 2 == 0) {
    r.comparacoes++;
    if (vetor[0] < vetor[1]) {
        r.minimo = vetor[0];
        r.maximo = vetor[1];
    } else {
        r.minimo = vetor[1];
        r.maximo = vetor[0];
    }
    i = 2;
} else {
    r.minimo = vetor[0];
    r.maximo = vetor[0];
    i = 1;
}
while (i < n - 1) {
    int menorPar, maiorPar;
    r.comparacoes++;
    if (vetor[i] < vetor[i + 1]) {
        menorPar = vetor[i];
        maiorPar = vetor[i + 1];
    } else {
        menorPar = vetor[i + 1];
        maiorPar = vetor[i];
    }
    r.comparacoes++;
    if (menorPar < r.minimo) {
        r.minimo = menorPar;
    }
    r.comparacoes++;
    if (maiorPar > r.maximo) {
        r.maximo = maiorPar;
    }
    i += 2;
}
return r;

}

int main(void) {
int *vetor = malloc(N * sizeof(int));

if (vetor == NULL) {
    printf("Erro ao alocar memoria.\n");
    return 1;
}
srand((unsigned int) time(NULL));
for (int i = 0; i < N; i++) {
    vetor[i] = rand();
}
Resultado direto = metodoDireto(vetor, N);
Resultado pares = metodoPares(vetor, N);
printf("PROJETO 08 - MINIMO E MAXIMO\n");
printf("Quantidade de elementos: %d\n\n", N);
printf("Metodo A - Direto\n");
printf("Minimo: %d\n", direto.minimo);
printf("Maximo: %d\n", direto.maximo);
printf("Comparacoes: %lld\n\n", direto.comparacoes);
printf("Metodo B - Por pares\n");
printf("Minimo: %d\n", pares.minimo);
printf("Maximo: %d\n", pares.maximo);
printf("Comparacoes: %lld\n\n", pares.comparacoes);
if (direto.minimo == pares.minimo &&
    direto.maximo == pares.maximo) {
    printf("Validacao: os resultados sao iguais.\n");
} else {
    printf("Erro: os resultados sao diferentes.\n");
}
free(vetor);
return 0;

}
