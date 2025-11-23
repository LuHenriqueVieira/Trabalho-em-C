#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");    // caracteres em portugues

    int num = 0, num2 = 0;
    puts("Digite um número:");
    scanf("%d", &num);
    puts("Digite outro número:");
    scanf("%d", &num2);

    int soma = num + num2;

    for(int i = 0; i <= soma; i++){
        if (i % 2 == 0 ){
            printf("Intervalos de %d ate %d\n", soma, i);
        }
    }
    return 0;
}