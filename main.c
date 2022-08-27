#include <stdio.h>
#include <stdlib.h>
#include "TST1.h"

int main()
{
    int x,y;
    x=33;
    y=99;
    printf("Sum of %d  ,%d  = %d\n",x,y,sum(x,y));
printf( "Even =%d  , Odd = %d\n",!even(x),even(x));
    return 0;
}
