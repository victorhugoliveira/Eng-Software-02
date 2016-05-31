/*

    Autor: Victor Hugo Gomes de Oliveira
    RA: 177976
    Descrição: Sistema destinado a converter temperatura em graus Celsius para Kelvin ou Fahrenheit.
    Mudanças Realizadas:
                         - Criação do "botão" Sair;
                         - Melhoramento da Interface;
                         - Melhoramento Transição de Telas.
    Versão: 0.2
    Data: 23/04/2016


*/


#include<stdio.h>
#include<stdlib.h> // Biblioteca para apagar tela no windows - system("cls");




int main(){

    // Área de Designação de variáveis
        float TempC = 0.0, TempK = 0.0, TempF = 0.0;
        int opc = 0, selecao = 0;

    // Corpo do Código

    do{     // Layout
        printf("\n\t========================================================  ");
        printf("\n\t||  Bem-Vindo ao Software Calculadora de Temperatura  ||	");
        printf("\n\t======================================================== ");
        printf("\n\t||                                                    ||");
        printf("\n\t||        Digite a Temperatura em Celsius             ||");
        printf("\n\t||          e descubra em Kelvin e Fahrenheit         ||");
        printf("\n\t||                                                    ||");
        printf("\n\t========================================================\n\t  ");

        printf("\n\t   Temperatura em Celsius: ");
        scanf("%f",&TempC);                                   // Entrada de dados

        printf("\n\t   Digite: ");
        printf("\n\t   1 - Efetuar Calculo ");
        printf("\n\t   2 - Alterar a Temperatura ");
        printf("\n\t   3- Sair  \n\n\t   ");        // Botão
        scanf("%d",&selecao);

        system("cls");                                       // Limpa Tela

        if(selecao == 1){

            // Conversões de Temperatura
            TempK = TempC + 273;

            TempF = (TempC * 1.8) + 32;

            printf("\n\t========================================================  ");
            printf("\n\t||  Bem-Vindo ao Sistema Calculadora de Temperatura   ||	");
            printf("\n\t======================================================== ");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||              Resultado da Conversao                ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t========================================================\n\t  ");
            printf("\n\tTemperatura em Graus Kelvin: %0.2f",TempK);
            printf("\n\tTemperatura em Graus Fahrenheit: %0.2f",TempF);


            // Condição para executar novamente
            printf("\n\tDeseja efetuar nova conversao? (1)SIM ou Qualquer outro numero para NAO \n\t");   // Condição para executar novamente
            scanf("%d",&opc);
            system("cls");
        }
        if(selecao == 2){
            opc = 1;

        }
        if(selecao > 2){
            printf("\n\t========================================================  ");
            printf("\n\t||                 FINALIZANDO O SISTEMA ...          ||	");
            printf("\n\t======================================================== ");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                         FIM                        ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t========================================================\n\t  ");
            return 0;
        }

    }while(opc == 1);

    return 0;
}
