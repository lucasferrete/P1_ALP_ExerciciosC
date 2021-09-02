#include <stdio.h>
/* 
Escreva um programa que leia o horário (horas e minutos) de partida de um voo, 
o tempo de viagem e a diferença em horas do fuso horário do destino. 
O programa deve informar qual será o horário local no destino previsto para a chegado do voo.
Lembrando que o voo pode chegar no dia seguinte.
 */

int main(){

    int horapartida, minutopartida, horaduracao, minutoduracao, diferenca, horaextra, dia, minutochegada, horachegada;

    printf("Informe o horario do voo: ");
    scanf("%d : %d", &horapartida, &minutopartida);

    printf("Informe a duracao do voo: ");
    scanf("%d : %d", &horaduracao, &minutoduracao);

    printf("Informe a diferenca de horario '-12 a +12': ");
    scanf("%d", &diferenca);

    minutochegada = minutopartida + minutoduracao;

    if(minutochegada > 60){
        horaextra = 1;
        minutochegada = minutochegada - 60;
    }
    else{
        horaextra = 0;
    }

    horachegada = horapartida + horaduracao + horaextra + diferenca;

    if(horachegada > 24){
        dia = 1;
        horachegada = horachegada - 24;
    }
    else{
        dia = 0;
    }

    printf("\n-------------------------");

    if(dia == 1){
        printf("\nChegara no dia seguinte");
    }
    else{
        printf("\nChegara no dia");
    }

    printf("\nHora de chegada: %d:%d", horachegada, minutochegada);

    return 0;

}
