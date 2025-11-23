#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");    // caracteres em português

    int vetor[10] = {10,20,30,40,50,60,70,80,90,100}, soma = 0, media = 0;

    puts("Exibição dos Vetores:");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
        soma += vetor[i];

    }

    media = soma / 10;
    printf("\nSoma: %d ", soma);
    printf("\nMedia dos valores: %d", media);
    return 0;
}