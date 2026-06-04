#include <time.h>
#include <stdio.h>
#include "relatorios.h"

char data_log(char evento[]) {
    FILE *arquivo = fopen("historico.log", "a");

    if (arquivo == NULL) {
        printf("Arquivo não encontrado!");
    }

    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    fprintf(arquivo,"[%02d/%02d/%04d %02d:%02d:%02d] %s\n",
        tm_info->tm_mday,
          tm_info->tm_mon + 1,
          tm_info->tm_year + 1900,
          tm_info->tm_hour,
          tm_info->tm_min,
          tm_info->tm_sec,
          evento
      );
    fclose(arquivo);
}
