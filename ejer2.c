#include <stdio.h>

int main()
{
    int num;
    
    printf("dame un numero: ");
    scanf("%i", &num);
    
    if (num % 2 == 0)
    {
        printf ("el numero es par");
    }
    
    else
    {
        printf("el numero es impar");
    }
}
