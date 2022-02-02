#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fprt;

    // use apropriate locations
    fprt = fopen("D:/Praca/Projekty/Repozytoria/Tekst.txt","w");
    if(fprt==NULL)
    {
        printf("Error");
        exit(1);
    }
    fprintf(fprt,"Hello World");
    fclose(fprt);
}