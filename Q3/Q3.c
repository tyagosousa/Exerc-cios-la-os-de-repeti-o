#include <stdio.h>

/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao
valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador
apostou, o valor do prêmio e imprima quanto cada um ganharia do prêmio com base no valor investido*/

int main(){

    float valorPremio, soma = 0;
    float vetor[3];
    int index =0;

    printf("Informe o valor do premio: ");
    scanf("%f", &valorPremio);

    while(valorPremio>0 && index != 3){

        printf("Informe o valor da aposta do jogador %d: ", (index+1));
        scanf("%f", &vetor[index]);
        if(vetor[index] <= 0){
            printf("vc digitou um valor inválido, tente de novo");
        }else{
        soma += vetor[index];
        index++;
        }
    }

    if(index == 3){
        for(int i = 0; i<3; i++){
           printf("Jogador %d: %.2f%%\n", (i + 1), (float)(vetor[i]) / soma * 100);
        }
    }
    
    return 0;
}