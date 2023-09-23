#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t = 4, s = 0;
    for (int i = 0 ; i < 4; i++)
    {
        for (int j = t; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1 ; j++)
        {
            if(i==0)
            {
               printf("*");
               s++;
            }
            else
            {
               for (int k = 1; k < s+3; k++)
                {
                   printf("*");  
                }
                s += 2;
                break;
            }
        }
        printf("\n");
        t--;
    }
    

    return (0);
}
