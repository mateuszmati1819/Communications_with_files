#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int count_letters(char *surname);
void clearScreen();

int main()
{
    int letters;
    char tekst[]="Oles";
    clearScreen();

    FILE *fprt;
    int data;
    char singleline[150];
    letters = count_letters(tekst);

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

int count_letters(char *surname)
{
    int j;
    for(int i=0; surname[i]!='\0'; i++)
        {
          j=i;  
        }
        return j+1;
}

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}