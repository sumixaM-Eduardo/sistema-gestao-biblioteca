#ifndef USUARIOS_H
#define USUARIOS_H

typedef struct {
    char name[50];
    char password[50];
    char username[50];
    int id;
    int type;
    int active;
}Usuario;

void inicializar_sistema();
int cadastro();
void listagem();
int login();
int validar_username();

extern Usuario armazenar[100];
extern int totalusuarios;



#endif
