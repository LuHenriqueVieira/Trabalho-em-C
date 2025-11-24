#include <stdio.h>

// copia o vetor e multiplica
void copiaVetor(int vetorCopia[], int vetor[]){
    for(int i = 0; i < 10; i++){
        vetorCopia[i] = vetor[i] * 2;
    }
}

// mostra o vetor
void mostraVetorCopia(int vetorCopia[]){
    for(int i = 0; i < 10; i++){
        printf("%d \n", vetorCopia[i]);
    }
}

int main(){

    int vetor[10] = {10,20,30,40,50,60,70,80,90,100}, vetorCopia[10];

    copiaVetor(vetorCopia, vetor);
    mostraVetorCopia(vetorCopia);

    return 0;
}