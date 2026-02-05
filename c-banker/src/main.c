#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n============================================\n");
        printf("\tSISTEMA DE GERENCIAMENTO BANCÁRIO\n");
        printf("============================================\n");

        printf("\nSeja bem-vindo!\n\n");

        printf("=============== MENU PRINCIPAL================\n");
        printf("1. Criar conta\n");
        printf("2. Login\n");
        printf("0. Sair\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

    } while (opcao != 0);    

    return 0;
}