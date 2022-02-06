#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fprt;
    int data;
    char singleline[150];
    

    // use apropriate locations
    fprt = fopen("D:/Praca/Projekty/Repozytoria/Tekst.txt","r");
    if(fprt==NULL)
    {
        printf("Error");
        exit(1);
    }
    while(!feof(fprt))
    {
        fgets(singleline, 150, fprt);
        puts(singleline);
    }
    

    fclose(fprt);
}