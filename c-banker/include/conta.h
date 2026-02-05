#ifndef DADOS.H
#define DADOS.H

#define MAX_NOME 50
#define MAX_SENHA 10

typedef struct {
    int numero;
    char nome[MAX_NOME];
    int senha[MAX_SENHA];
    float saldo;
    int ativa;
} Conta;

#endif

