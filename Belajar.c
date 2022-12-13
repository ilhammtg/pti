//kalkulator sederhana
//by ilham
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    
    int a, b, hasil, menu, mulai;
    float c, d, hasilbagi;
    char e, keluar;
    
    program:
    system("cls"); printf("\n\n[]==================================[]\n");
    printf("\t  SIMPLE CALCULATOR\n");
    printf("[]==================================[]\n\n");
    printf("\tOption :\n");
    printf("\t1. Addition\n");
    printf("\t2. Subtraction\n");
    printf("\t3. Multiplication\n");
    printf("\t4. Division\n");

    printf("Selected Option : ");
    scanf("%d",&menu);
    printf("-------------------------------\n");
    switch (menu){
      case 1:
        printf("\n1. Addition :\n");
        printf("Enter first number\t: ");
        scanf("%d", &a);
        printf("Enter the second number\t: ");
        scanf("%d", &b);
        hasil = a + b;
        printf("------------------------------- +\n");
        printf("Resultsl\t\t: %d\n", hasil);
        break;
    case 2:
        printf("\n1. Subtraction :\n");
        printf("Enter first number\t: ");
        scanf("%d", &a);
        printf("Enter the second number\t: ");
        scanf("%d", &b);
        hasil = a - b;
        printf("------------------------------- -\n");
        printf("Resultsl\t\t: %d\n", hasil);
        break;
    case 3:
        printf("\n1. Multiplication :\n");
        printf("Enter first number\t: ");
        scanf("%d", &a);
         printf("Enter the second number\t: ");
        scanf("%d", &b);
        hasil = a * b;
        printf("------------------------------- x\n");
        printf("Resultsl\t\t: %d\n", hasil);
        break;
    case 4:
        printf("\n1. Division :\n");
        printf("Enter first number\t: ");
        scanf("%f", &c);
        printf("Enter the second number\t: ");
        scanf("%f", &d);
        hasilbagi = c / d;
        printf("------------------------------- :\n");
        printf("Resultsl\t\t: %2.f\n", hasilbagi);
        break;
        default:
        printf("Options not available.");
        break;
    }

            printf("\nYou want to repeat it? [y/n] :");
            scanf("%c",&e);
            keluar = getche();
            
            if (keluar == 'y' || keluar == 'y'){
                goto program;
                return 0;
            }else {
                goto selesai;
            }
            selesai:
            system("exit");
 }   
          
