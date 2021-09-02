#include <stdio.h>
/* 
Um número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual a esse número. 
Escreva um um programa que leia um valor inteiro positivo e informe se ele é um número perfeito ou não.
Por exemplo, o número 6 é um número perfeito, pois 6 1+2 + 3.
 */

int main(){

    int num, soma = 0, divisor;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for(divisor = 1; divisor < num; divisor ++){
        if(num % divisor == 0){
            soma = soma + divisor;
        }
    }
    if(num == soma){
        printf("O numero %d e um numero perfeito", num);
    }
    else{
        printf("O numero %d nao e um numero perfeito", num);
    }

    return 0;

}
