#include <stdio.h>

/*Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores
lidos*/

int main(){

    int num, flag = 0, soma = 0;

    while(flag != 3){
        printf("Informe um numero:.... ");
        scanf("%d", &num);
        soma += (num*num);
        flag++;
    }
    
    printf("Soma: %d", soma);

    return 0;
}