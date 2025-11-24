#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");    // caracteres em portugues

    float precoProduto[5]; 
    int codigoProduto[5]; 

    puts("Digite as informações:");
    for(int i = 0; i < 5; i++){
        printf("O preço do produto %d:\n", i + 1);
        scanf("%f", &precoProduto[i]);
        fflush(stdin);
        puts("Codigo de codigoProduto (de 1 a 30):");
        scanf("%d", &codigoProduto[i]);
        fflush(stdin);
    }

    for(int i = 0; i < 5; i++){
        puts("");
        printf("Produto %d\n", i + 1);
        printf("Preço: %.2f\n", precoProduto[i]);
        printf("Codigo do produto: %d\n", codigoProduto[i]);
        printf("Procedencia: ");

        if (codigoProduto[i] == 1){
            printf("Sul\n");
        } else if (codigoProduto[i] == 2){
            printf("Norte\n");
        } else if (codigoProduto[i] == 3){
            printf("Leste\n");
        } else if (codigoProduto[i] == 4){
            printf("Oeste\n");
        }else if (codigoProduto[i] == 5 || codigoProduto[i] == 6){
            printf("Nordeste\n");
        }else if (codigoProduto[i] >= 7 && codigoProduto[i] <= 9){
            printf("Sudeste\n");
        }else if (codigoProduto[i] >= 10 && codigoProduto[i] <= 20){
            printf("Centro-Oeste\n");
        }else if (codigoProduto[i] >= 21 && codigoProduto[i] <= 30){
            printf("Nordeste\n");
        }else{
            printf("Codigo invalido\n");
        }
    }
    return 0;
}