#ifndef TRANSACAO_H
#define TRANSACAO_H

#define TIPO_DEPOSITO     1
#define TIPO_SAQUE        2
#define TIPO_TRANSFERENCIA 3

typedef struct {
    int conta_origem;
    int conta_destino;      
    int tipo;               
    float valor;
    char data[20];          
} Transacao;

#endif TRANSACAO_H
