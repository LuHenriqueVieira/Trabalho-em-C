#include <stdio.h>
#include <string.h>

void somaLinhas(int matriz[][4]){
    for(int i = 0; i < 4; i++){
        int soma = 0;
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
        matriz[i][3] = soma;
    }
}

void somaColunas(int matriz[][4]){
    for(int i = 0; i < 4; i++){
        int soma = 0;
        for(int j = 0; j < 4; j++){
            soma += matriz[j][i];
        }
        matriz[4][i] = soma;
    }
}


// mostra a matriz
void mostraMatriz(char produtos[][20], int matriz[][4]){
    for (int i = 0; i < 4; i++) {
        printf("%s\t", produtos[i]);
    }
    puts("");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        puts("");
    }
}

int main(){

    int matriz[5][4] = {{10,10,10,0}, {12,14,16,0}, {14,16,18,0},{16,18,20,0}, {0,0,0,0}};
    char produtos[4][20] = {"Acucar", "Leite", "Cafe", "Total"};

    somaLinhas(matriz);
    somaColunas(matriz);
    mostraMatriz(produtos, matriz);

    return 0;
}