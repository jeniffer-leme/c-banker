#include <stdio.h>
#include "conta.h"
#include "dados.h"

void criarConta() {
    Conta c;

    printf("Número da conta: ");
    scanf("%d", &c.numero);

    printf("Nome do titular: ");
    scanf(" %[^\n]", &c.nome);

    printf("Senha da conta: ");
    scanf("%d", &c.senha);

    c.saldo = 0.0;
    c.ativa = 1;

    FILE *f = fopen(ARQ_CONTA, "ab");

    if(f = NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&c, sizeof(Conta), 1, f);

    fclose(f);

    printf("Conta criada com sucesso!\n");

}


void listarConta() {
    Conta c;

    FILE *f = fopen(ARQ_CONTA, "rb");

    if(f = NULL) {
        printf("Nenhuma conta encontrada\n");
        return;
    }

    while (fread(&c, sizeof(Conta), 1, f) == 1) {
        if(c.ativa == 1) {
            printf("Conta: %d | Saldo: %.2f \n", c.numero, c.saldo);
        }
    }
    
}


void buscarConta() {
    Conta c;

    int numero;

    printf("Digite o número da conta: ");
    scanf("%d", numero);

    if(numero == c.numero) {
        printf("Conta: %d | Saldo: %.2f \n", c.numero, c.saldo);
    } else {
        printf("Conta não existe\n");
    }

}

int main() {

    criarConta();

    listarConta();

    return 0;
}
