#include <stdio.h>
#include <stdlib.h>
//DESAROLLAR UNA FUNCION FACTORIAL
double factorial(int num);
int main()
{
    printf("El factorial de 24 es %.0f", factorial(24) );
    return 0;
}
double factorial(int num){
double fact=1;

while(num>=2)
{
    fact= fact*num;
    num--;
}

return fact;
}
