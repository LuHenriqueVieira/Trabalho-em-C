#include <stdio.h>
#include <locale.h>

// calcula media dos veiculos
float mediaVeiculos(int numeroVeiculos[]){
    int soma = 0;
    for(int i = 0; i < 5; i++){
        soma += numeroVeiculos[i]; 
    }

    return soma / 5;
}

// calcula media dos acidentes
float mediaAcidentes(int numeroVeiculos[], int numeroAcidentes[]){
    int contador = 0, soma = 0;
    for(int i = 0; i < 5; i++){
        if (numeroVeiculos[i] < 2000){
            soma += numeroAcidentes[i];
            contador++;
        }
    }

    return soma / contador;
}

// mostra maior e menor indice
void indiceAcidentes(int numeroAcidentes[], int codigoCidade[]){
    int maiorCidade = 0, menorCidade = 0;
    int maiorAcidente = 0, menorAcidente = 0;
    for (int i = 0; i < 5; i++){
        if (numeroAcidentes[i] > maiorAcidente){
            maiorAcidente = numeroAcidentes[i];
            maiorCidade = codigoCidade[i];
        } else {
            menorAcidente = numeroAcidentes[i];
            menorCidade = numeroAcidentes[i];
        }
    }

    printf("Codigo da cidade com o maior número de acidentes: %d \nIndice de acidentes: %d\n", maiorAcidente, maiorCidade);
    printf("Codigo da cidade com o menor número de acidentes: %d \nIndice de acidentes: %d\n", menorAcidente, menorCidade);
}

int main(){
    setlocale(LC_ALL, "Portuguese");    // caracteres em portugues

    int codigoCidade[5] = {101,102,103,104,105}, numeroVeiculos[5] = {1900,1221,5740,1605,8092}, numeroAcidentes[5] = {53,64,34,46,120};

    indiceAcidentes(numeroAcidentes, codigoCidade);
    puts("");
    printf("Media de veiculos nas cinco cidades: %.2f\n", mediaVeiculos(numeroVeiculos));
    puts("");
    printf("Media de acidentes com cidades com menos de 2.000 veiculos: %.2f\n", mediaAcidentes(numeroVeiculos, numeroAcidentes));

    return 0;
}