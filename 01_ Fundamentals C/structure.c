/* ******************************************** *
 * Extremely complex code                       *
 * Fernanda Guzman                              *
 * 05 / Dic / 2020                              *
 * ******************************************** */

#include <stdio.h>
#include <stdlib.h>

/* Generate nultiple lines of output */
int main()
{
    int a,b;

    printf("Type a positive value: ");
    scanf("%d",&b);
    for(a=0;a<b;a++)
    {
        printf("I must do this %d times\n",b);
        if(a==9) 
            break;
    }

    return 0;
}