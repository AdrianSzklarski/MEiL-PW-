#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b, h, Vp, Vo;
    printf("Podaj wartości boków podstawy a i b:\n");
    scanf("%f %f", &a, &b); 
    printf("Podaj wartość wysokości h:\n");
    scanf("%f", &h);
    
 
    Vp = a * b * h; 
    Vo = Vp / 3.0;  
    
    printf("Objętość prostopadłościanu Vp = %f\n", Vp);
    printf("Objętość ostrosłupa Vo = %f\n", Vo);

    return 0;
}
