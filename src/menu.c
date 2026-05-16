#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "usuario.h"


void menu_inicial () {
    int select = 0;

    printf("====Gestão de Bibliotecas====\n\n");

    printf("Seja bem-vindo ao Sitema de Gestão de Bibliotecas.\n");

    while (1){

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
        if (select == 1) {

            while (getchar() != '\n');

            char username_auth[50];

            while (1) {
                system("clear");

                printf("Digite seu username:\n");

                fgets(username_auth, 50, stdin);

                username_auth[strcspn(username_auth, "\n")] = '\0';

                if (validar_username(username_auth) == 0) {

                    printf("Esse username já está em uso!\n");
                }
                if (validar_username(username_auth) == 1) {

                    strcpy(armazenar[totalusuarios].username, username_auth);

                    break;
                }
            }
            while (1) {

                char password_auth[50];

                while (getchar() != '\n');

                printf("Digite sua senha:\n");

                fgets(password_auth, 50, stdin);

                username_auth[strcspn(password_auth, "\n")] = '\0';

                if (strlen(password_auth) < 8) {

                    printf("Senha muito curta!");

                    continue;
                }
                strcpy(armazenar[totalusuarios].password, password_auth);
                break;
            }
        }
        while (1) {

            while (getchar() != '\n');

            char name_auth[50];

            printf("Digite seu nome:");

            fgets(name_auth, 50, stdin);
            break;
        }

    }

}