#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "usuario.h"


void menu_inicial () {
    int select = 0;

    printf("====Gestão de Bibliotecas====\n\n");

    printf("Seja bem-vindo ao Sitema de Gestão de Bibliotecas.\n");

    while (1) {
        printf("Selecione a opção desejada:\n\n");

        printf("1. Cadastrar\n2. Login\n");

        if (scanf("%d", &select) != 1) {

            while (getchar() != '\n');

            system("clear");

            printf("Digite apenas numeros!!\n");

            continue;
        }


        if (select > 2 || select < 1) {

            system("clear");

            printf("Valor Invalido!\n\n");

            continue;
        }
        while (getchar() != '\n');
        if (select == 1) {

            cadastro();
        } else if (select == 2) {
            login();
        }
    }
}