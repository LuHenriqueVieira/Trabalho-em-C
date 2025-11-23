#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");    // caracteres em portugues

    char nome[30];
    sprintf(nome, "Tecnologia da Informação");
    printf("%s", nome);

    return 0;
}