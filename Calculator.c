#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "calculation.h"


void main(){

    unsigned short int option;
    double result;
    double number[2];

    setlocale(LC_ALL,"Portuguese");
    
    do{
        screen();
        printf("Qual operação deseja fazer?\n");
        printf("1-Divisão\n");
        printf("2-Multiplicação\n");
        printf("3-Subtração\n");
        printf("4-Adição\n");

        scanf("%d", &option);
        
        if(option <= 0 || option >= 5){
            system("cls");
        }
    }while(option <= 0 || option >= 5);

    do{
        switch(option){
        case 1:
            printf("Escolha um número para dividir: ");
            scanf("%lf",&number[0]);
            printf("Dividir para quantos: ");
            scanf("%lf",&number[1]);
            result = division(number);
            printf("\nresultado = %.2lf \n", result);
            break;
        case 2:
            printf("Escolha um número para multiplicar: ");
            scanf("%lf",&number[0]);
            printf("Multiplicar por quanto: ");
            scanf("%lf",&number[1]);
            result = multiplication(number);
            printf("\nresultado = %.2lf \n", result);
            break;
        case 3:
            printf("Escolha um número para subtrair: ");
            scanf("%lf",&number[0]);
            printf("Subtrair quantos: ");
            scanf("%lf",&number[1]);
            result = subtraction(number);
            printf("\nresultado = %.2lf \n", result);
            break;
        case 4:
            printf("Escolha um número para somar: ");
            scanf("%lf",&number[0]);
            printf("Somar por quanto: ");
            scanf("%lf",&number[1]);
            result = addition(number);
            printf("\nresultado = %.2lf \n", result);
            break;
        }

    system("pause");
    system("cls");
    screen();
    printf("Deseja continuar?\n");
    printf("0-(NÃO) 1-(DIVISÃO) 2-(MULTIPLICAÇÃO) 3-(SUBTRAÇÃO) 4-(ADIÇÃO)\n");
    scanf("%d",&option);
    
    if(option >= 1 && option <= 4){
        system("cls");
        screen();
    }else{
        system("cls");
    }
    }while(option);
}