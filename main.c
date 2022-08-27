#include <stdio.h>
#include <stdlib.h>
#include "TST1.h"

int main()
{
    int x,y;
    x=33;
    y=0;
    printf("Sum of %d  ,%d  = %d\n",x,y,sum(x,y));
printf( "Even =%d  , Odd = %d\n",!even(x),even(x));
    printf("Div of %d  ,%d  = %d\n",x,y,DIV(x,y));

    return 0;
}
