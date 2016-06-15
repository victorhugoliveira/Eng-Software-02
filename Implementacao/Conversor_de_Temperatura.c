/*

    Autor: Victor Hugo Gomes de Oliveira
    RA: 177976
    Descri��o: Sistema destinado a converter temperatura em graus Celsius para Kelvin ou Fahrenheit.
    Mudan�as Realizadas:
                         - Restri��es de intervalos de n�meros
                         - Melhoramento da Interface;
                         - Otimiza��o do C�digo;
                         - Melhoramento Transi��o de Telas (Utiliza��o de Fun��es)

    Vers�o: 1.0
    Data: 21/05/2016

*/

// Bibliotecas utilizadas no C�digo
#include<stdio.h>
#include<stdlib.h> // Biblioteca para apagar tela no windows - system("cls");
#include<ctype.h>


void layout(){

        printf("\n\t========================================================  ");
        printf("\n\t||    Bem-Vindo ao Sistema Conversor de Temperatura   ||	");
        printf("\n\t======================================================== ");
        printf("\n\t||                                                    ||");
        printf("\n\t||        Digite a Temperatura em Celsius             ||");
        printf("\n\t||          e descubra em Kelvin e Fahrenheit         ||");
        printf("\n\t||                                                    ||");
        printf("\n\t========================================================\n\t  ");

}


void erro_entrada_de_dado(){

    printf("\n\t========================================================  ");
    printf("\n\t||    Bem-Vindo ao Sistema Conversor de Temperatura   ||	");
    printf("\n\t======================================================== ");
    printf("\n\t||                                                    ||");
    printf("\n\t||        Entre com um dos numeros: 1 ou 2            ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t========================================================\n\t  ");

}


void fim(){

    printf("\n\t========================================================  ");
    printf("\n\t||                 FINALIZANDO O SISTEMA ...          ||	");
    printf("\n\t======================================================== ");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                         FIM                        ||");
    printf("\n\t||                                                    ||");
    printf("\n\t||                                                    ||");
    printf("\n\t========================================================\n\t  ");

}

int main(){

    // �rea de Designa��o de vari�veis
        float TempC = 0.0, TempK = 0.0, TempF = 0.0;
        int opc = 0, selecao = 0;

    // Corpo do C�digo
    do{
        layout();               // Chamada de Fun��o de Interface
        printf("\n\tTemperatura em Celsius (com max 2 casas apos . ex: 25.20): ");
        scanf("%f",&TempC);                                   // Entrada de dados

        printf("\n\t   Digite: ");
        printf("\n\t   1 - Efetuar Calculo ");
        printf("\n\t   2 - Alterar a Temperatura ");
        printf("\n\t   3- Sair  \n\n\t   ");        // Bot�o
        scanf("%d",&selecao);

        system("cls");

            switch(selecao){

                case 1:
                    // Convers�es de Temperatura
                        TempK = TempC + 273.15;

                        TempF = (TempC * 1.8) + 32;

                        printf("\n\t========================================================  ");
                        printf("\n\t||   Bem-Vindo ao Sistema Conversor de Temperatura    ||	");
                        printf("\n\t======================================================== ");
                        printf("\n\t||                                                    ||");
                        printf("\n\t||                                                    ||");
                        printf("\n\t||              Resultado da Conversao                ||");
                        printf("\n\t||                                                    ||");
                        printf("\n\t||                                                    ||");
                        printf("\n\t========================================================\n\t  ");
                        printf("\n\tTemperatura em Graus Kelvin: %0.2f",TempK);
                        printf("\n\tTemperatura em Graus Fahrenheit: %0.2f",TempF);

                        break;

                case 2:
                    // Permite alterar Entrada de Dados
                    opc = 1;
                    break;


                case 3:
                    // Finaliza o Sistema
                    fim();
                    system("pause");
                    system("cls");
                    return 0;

                default:
                    // Entrada de Dados Inv�lida
                    erro_entrada_de_dado();
                    system("pause");
                    system("cls");

            }
        // Condi��o para executar novamente
        printf("\n");
        printf("\n\tDeseja efetuar nova conversao?");
        printf("\n\t1 SIM ou Qualquer outro numero para NAO \n\t");   // Condi��o para executar novamente
        scanf("%d",&opc);
        system("cls");
        if(opc != 1){
            fim();
            system("pause");
            system("cls");
        }

    }while(opc == 1);
}
