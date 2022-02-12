#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"


int main()
{
    int letters;
    clearScreen();

    FILE *fprt;
    int data;
    char singleline[150];

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
    return 0;
}

// void clearScreen()
// {
//   const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
//   write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
// }