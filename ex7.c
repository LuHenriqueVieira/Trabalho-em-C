#include <stdio.h>

// ordenacao utilizando bubble sort
void ordenaVetor(int vetor[]){
    int aux = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10 - 1; j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            } 
        }
    }
}

void mostraVetor(int vetor[]){
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){

    int vetor[10] = {234, 102, 4, 76, 4821, 24, 0, 21, 98, 66};

    ordenaVetor(vetor);
    mostraVetor(vetor);

    return 0;
}