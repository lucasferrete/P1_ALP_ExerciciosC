#include <stdio.h>
/* 
Uma loja de material de construção vende os produtos da tabela a seguir, 
identificados pelo seu código e com o preço correspondente:

Código \ Produto \ Preço Unitário
1 Torneira 207,00 
2 Pia banheiro 99,00
3 Banco plástico 8,00
4 Fita adesiva 1,60
5 Chave inglesa 50,00

Faça um programa que processe diversos pedidos feitos a essa loja de material de construção.
Em cada pedido, deve ser solicitado até 3 produtos diferentes, identificado por seu código, 
e especificada a quantidade de unidades desejada. Informe o valor a pagar ao final de cada pedido. 
Repita o processamento de pedidos até que seja fornecido um código de pedido -1 (marca de parada). 
Ao final do processamento, emita um relatório de vendas com as seguintes informações:

Número de unidades vendidas de cada produto;
Produto mais vendido;
Total vendido em reais;
Número de pedidos processados.

 */
int main(){
    int pedido, unidades;
    int torneira = 0;
    int piaBanheiro = 0;
    int bancoPlastico = 0;
    int fitaAdesiva = 0;
    int chaveInglesa = 0;
    float valor = 0;
    int qtsPedidos = 0;

    do{
        printf("Tabela de Produtos\n");
        printf("1. Torneira - 207,00\n");
        printf("2. Pia Banheiro - 99,00\n");
        printf("3. Banco Plastico - 8,00\n");
        printf("4. Fita Adesiva - 1,60\n");
        printf("5. Chave Inglesa - 50,00\n");
        printf("Digite -1 para sair\n");

        printf("Informe o pedido: ");
        scanf("%d", &pedido);

        if(pedido == -1){
            break;
        }
        else if(pedido == 1){
            printf("Quantidade de unidades: ");
            scanf("%d", &unidades);
            torneira += unidades;
            valor += 207.00 * unidades;
        }
        else if(pedido == 2){
            printf("Quantidade de unidades: ");
            scanf("%d", &unidades);
            piaBanheiro += unidades; 
            valor += 99.00 * unidades;
        }
        else if(pedido == 3){
            printf("Quantidade de unidades: ");
            scanf("%d", &unidades);
            bancoPlastico += unidades; 
            valor += 8.00 * unidades;
        }
        else if(pedido == 4){
            printf("Quantidade de unidades: ");
            scanf("%d", &unidades);
            fitaAdesiva += unidades; 
            valor += 1.60 * unidades;
        }
        else if(pedido == 5){
            printf("Quantidade de unidades: ");
            scanf("%d", &unidades);
            chaveInglesa += unidades; 
            valor += 50.00 * unidades;
        }
        else{
            printf("Pedido Invalido!\n");
        }

        if(pedido >= 1 && pedido <= 5){
            qtsPedidos++;
        }

    }while(qtsPedidos < 3);

    printf("----------------------------\n");
    printf("Unidades vendidas de cada produto:\n");
    printf("Torneira: %d\n", torneira);
    printf("Pia Banheiro: %d\n", piaBanheiro);
    printf("Banco Plastico: %d\n", bancoPlastico);
    printf("Fita Adesiva: %d\n", fitaAdesiva);
    printf("Chave Inglesa: %d\n", chaveInglesa);

    printf("----------------------------\n");
    printf("Produto mais vendido: \n");
    if(torneira > piaBanheiro && torneira > bancoPlastico && torneira > fitaAdesiva && torneira > chaveInglesa){
        printf("O produto mais vendido foi a torneira\n");
    }
    else if(piaBanheiro > torneira && piaBanheiro > bancoPlastico && piaBanheiro > fitaAdesiva && piaBanheiro > chaveInglesa){
        printf("O produto mais vendido foi a pia de banheiro\n");
    }
    else if(bancoPlastico > torneira && bancoPlastico > piaBanheiro && bancoPlastico > fitaAdesiva && bancoPlastico > chaveInglesa){
        printf("O produto mais vendido foi o banco de plastico\n");
    }
    else if(fitaAdesiva > torneira && fitaAdesiva > piaBanheiro && fitaAdesiva > bancoPlastico && fitaAdesiva > chaveInglesa){
        printf("O produto mais vendido foi a fita adesiva\n");
    }
    else{
        printf("O produto mais vendido foi a chave inglesa\n");
    }

    printf("----------------------------\n");
    printf("Valor total Vendido: %.2fR$\n", valor);

    printf("----------------------------\n");
    printf("Quantidade de pedidos processados: %d", qtsPedidos);

    return 0;
}