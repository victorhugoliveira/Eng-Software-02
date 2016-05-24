#include<stdio.h>
#include<stdlib.h> // Biblioteca para apagar tela no windows - system("cls");


int main(){

    // Área de Designação de variáveis
        float TempC = 0.0, TempK = 0.0, TempF = 0.0;
        int opc = 0, selecao = 0.0;

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

        printf("\n\tTemperatura em Celsius: ");
        scanf("%f",&TempC);                                   // Entrada de dados
        
        printf("\n\t 1 - Efetuar Calculo e 2 - Digitar Peso/Altura novamente ");        // Botão 
        scanf("\n\t%d",&selecao);
        
        system("cls");                                       // Limpa Tela

        if(selecao == 1){

            // Conversões de Temperatura
            TempK = TempC + 273;
    
            TempF = (TempC * 1.8) + 32;
    
            printf("\n\t========================================================  ");
            printf("\n\t||  Bem-Vindo ao Software Calculadora de Temperatura  ||	");
            printf("\n\t======================================================== ");
            printf("\n\t||                                                    ||");
            printf("\n\t||              Resultado da Conversao                ||");
            printf("\n\t||                                                    ||");
            printf("\n\t||                                                    ||");
            printf("\n\t========================================================\n\t  ");
            printf("\n\tTemperatura em Graus Kelvin: %0.2f",TempK);
            printf("\n\tTemperatura em Graus Fahrenheit: %0.2f",TempF);
        
        }

        printf("\n\tDeseja continuar? (1)Sim, (2 ou qualquer numero)Nao\n");            // Condição para executar novamente
        scanf("\n\t %d",&opc);
        system("cls");
    }while(opc == 1);

    return 0;
}
