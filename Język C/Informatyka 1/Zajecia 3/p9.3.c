#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <errno.h>

int main()
{
    double a, b, c;
    printf("Podaj a b: ");
    scanf("%lf %lf", &a, &b);  
    c = a + b;
    printf("Suma 2ch liczb: %6.2lf\n", c);
    
    return 0;  
}

