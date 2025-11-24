#include <stdio.h>

void inveterVetorCopia(int vetorCopia[], int vetor[]){
    int fim = 9;
    for(int i = 0; i < 10; i++){
        vetorCopia[i] = vetor[fim];
        fim--;
    }
}

void mostraVetorOriginal(int vetor[]){
    puts("Vetor Original:");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
}

void mostraVetorCopia(int vetorCopia[]){
    puts("\nVetor Invertido:");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetorCopia[i]);
    }
}

int main(){

    int vetor[10] = {10,20,30,40,50,60,70,80,90,100}, vetorCopia[10];

    inveterVetorCopia(vetorCopia, vetor);
    mostraVetorOriginal(vetor);
    mostraVetorCopia(vetorCopia);

    return 0;
}