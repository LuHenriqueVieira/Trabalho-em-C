#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");    // caracteres em portugues

    char senhaSecreta[7], entrada[7];
    sprintf(senhaSecreta, "*123AB");
    int tentativas = 3;

    do {
        puts("Digite a senha:");
        fgets(entrada, 7, stdin);
        fflush(stdin);  // limpa buffer
        
        if (strcmp(senhaSecreta, entrada) == 0){
            puts("Voce acertou!");
            break;
        } else {
            puts("A senha está incorreta, tente novamente");
            tentativas--;
            printf("Tentativas restantes: %d\n", tentativas);
        }


    } while (tentativas != 0);

    if (!tentativas) {
        puts("Voce falhou");
    }

    return 0;
}