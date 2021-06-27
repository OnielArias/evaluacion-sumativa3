#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{  float a, b, c, x1, x2;
    printf("Escriba el valor a ");
    scanf("%f", &a);
    printf("Escriba el valor b ");
    scanf("%f", &b);
    printf("Escriba el valor c ");
    scanf("%f", &c);
    x1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);
    printf("El valor de X1 es %f\n",x1);
    printf("El valor de X2 es %f",x2);
    return 0;
}
