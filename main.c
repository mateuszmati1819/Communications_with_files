#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "functions.h"


int main()
{
    int letters;
    clearScreen();

    FILE *fprt;
    int data;
    char singleline[150];
    int tablica[5];

    fprt = fopen("D:/Praca/Projekty/Repozytoria/Tekst.txt","r");
    if(fprt==NULL)
    {
        printf("Error");
        exit(1);
    }
    while(!feof(fprt))
    {
        fgets(singleline, 150, fprt);
        letters = count_letters(singleline);
    }

    printf("%s, amount of letters is %d",singleline, letters);
    

    fclose(fprt);

    printf(" \nTest for venture functions: \n");
    // printf("Drawn number is: %d", venture_number(5));
    
    srand(time(NULL));
    for(int i =0; i<5;i++)
    {
        tablica[i]=venture_number(49);
    }
    for(int i =0; i<5;i++)
    {
        printf("%d \n", tablica[i]);
    }
    
    tablica[0]=lotto_numbers(tablica[5]);
    printf("Check of function lotto_numbers: %d",tablica[0]);

    return 0;
}

