#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int main()
{
     printf("\e[1;1H\e[2J");
    // int arr[10]={1,1,2,3,5,8,13,21,34,55};
    // int *ptr=&arr;
    // printf("%i",*ptr);
    
    for(int i =0; i<5;i++)
    {
        if(i==0||i==3||i==4)
        {
            for(int j=0;j<5;j++)
            {
                if(j==0||j==4)
                {
                    printf("*");
                }
                
                else
                {
                    printf(" ");
                }
                
            }
        }
        if(i==1)
            {
                for(int j=0;j<5;j++)
                {
                    if(j==2)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                    
                }   
            }
            if(i==2)
            {
                for(int j=0;j<5;j++)
                {
                    if(j==0||j==2||j==4)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    } 
                }
            }
            printf("\n");
    }
    printf("\n");
    printf("*   *\n");
    printf("** **\n");
    printf("* * *\n");
    printf("*   *\n");

    // int size =10;

    // for(int i=0;i<(size+1);i++)
    // {
    //     if(i==0 || i==size)
    //     {
    //         for(int j=0;j<(size+1);j++)
    //         {
    //             printf("* ");
    //         }
    //     }
    //     else
    //     {
    //         for(int k=0;k<(size+1);k++)
    //         {
    //             if(k==0 || k==size)
    //             {
    //                 printf("* ");
    //             }
    //             else
    //             {
    //                 printf("  ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }


}