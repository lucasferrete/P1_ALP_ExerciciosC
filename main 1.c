#include <stdio.h>
/* 
Considere uma loja que, ao fazer o cálculo do valor a ser pago em uma compra, 
dá um desconto de acordo com o número de unidades compradas, conforme a seguinte tabela

até 10 unidades	0%
de 11 a 20 unidades	10%
de 21 a 50 unidades	15%
acima de 50 unidades -	

Construa um programa para calcular o preço a pagar, sendo fornecidos o número de unidades
vendidas e o preço unitário do produto comprado. Após calcular o eventual desconto, 
o programa deve informar o valor a pagar e, se houve desconto, de quanto foi.

 */
int main (){

    int unid;
    float valor;

    printf("* O valor do produto e 5,00 reais*");
    printf("\nQuantas unidades deseja comprar: ");
    scanf("%d", &unid);

    if(unid <= 10){
        printf("\nVoce nao obteve desconto");
        valor = unid * 5;
    }
    else if (unid >= 11 && unid <=20){
        printf("\nVoce obteve um desconto de 10 por cento!");
        valor = unid * 5 * 0.1;
    }
    else if (unid >= 21 && unid <= 50){
        printf("\nVoce obteve um desconto de 15 por cento!");
        valor = unid * 5 * 0.15;
    }
    else if (unid > 50){
        valor = unid * 5 * 0.2;
        printf("\nVoce obteve um desconto de 20 por cento!");
    }

    printf("\nO valor a pagar sera: %.2f", valor);

    return 0;

}
