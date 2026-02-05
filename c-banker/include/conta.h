#ifndef CONTA_H
#define CONTA_H

#define MAX_NOME 50
#define MAX_SENHA 10

typedef struct {
    int numero;
    char nome[MAX_NOME];
    int senha[MAX_SENHA];
    float saldo;
    int ativa;
} Conta;

void criarConta();

void listarConta();

void buscarConta();

#endif

