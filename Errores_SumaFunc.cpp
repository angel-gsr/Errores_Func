#include <stdio.h>

int suma(int a, int b); //declarar
int main()
{
    int num1, num2, sum;
    printf("Introducir dos numeros: ");
    scanf("%d %d", &num1, &num2);
    sum = suma(num1, num2); //llamar
    printf("La suma es: %d", sum);
    
    return 0;
}

int suma(int a, int b)
{
    int add;
    add = a + b;
    
    return add;
}

