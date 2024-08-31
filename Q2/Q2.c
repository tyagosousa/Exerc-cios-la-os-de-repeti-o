#include <stdio.h>

/*Leia quatro notas, calcule a média aritmética e imprima o resultado*/

int main(){

    float nota, soma = 0;

    for(int i = 0; i<4; i++){
        printf("Informe a nota %d: ", (i+1));
        scanf("%f", &nota);
        soma += nota;
    }

    printf("Média: %.2f", soma/4);
    
    return 0;
}