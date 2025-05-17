#include <stdio.h>
#include <math.h>

int main()
{
    int op, a, b, res=0;
    
    do 
    {
        printf("menu: \n"); 
        printf("escoge una opcion: \n");
        printf("suma = 1 \n");
        printf("resta = 2 \n");
        printf("mul. = 3 \n");
        printf("división = 4 \n");
        printf("raiz cuadrada=5 \n");
        printf("potencia=6 \n");
        printf("salida = 0 \n");
        scanf("%i", &op);
    }
    
    while(op < 0 && op > 6);
    
    do
    {
        switch (op)
        {
            case 1:
              printf("dame un numero: \n");
              scanf("%i", &a);
              printf("dame otro numero: \n");
              scanf("%i", &b);
              res = a+b;
              break;
              
            case 2:
              printf("dame un numero: \n");
              scanf("%i", &a);
              printf("dame otro numero: \n");
              scanf("%i", &b);
              res = a-b;
              break;
            
            case 3:
            
              printf("dame un numero: \n");
              scanf("%i", &a);
              printf("dame otro numero: \n");
              scanf("%i", &b);
              res = a*b;
              break;
            
            case 4:
            
              printf("dame un numero: \n");
              scanf("%i", &a);
              printf("dame otro numero: \n");
              scanf("%i", &b);
              res = a/b;
              break;
              
            case 5:
            
              printf("dame un numero: \n");
              scanf("%i", &a);
              res = sqrt(a);
              break;
            
            case 6:
              
              printf("dame un numero: \n");
              scanf("%i", &a);
              printf("dame un exponente: \n");
              scanf("%i", &b);
              res = pow(a,b);
              break;
        }
        
        printf("el resultado es %i\n", res);
        printf("\n\n");
        
        printf("menu: \n"); 
        printf("escoge una opcion: \n");
        printf("suma = 1 \n");
        printf("resta = 2 \n");
        printf("mul. = 3 \n");
        printf("división = 4 \n");
        printf("raiz cuadrada=5 \n");
        printf("potencia=6 \n");
        printf("salida = 0 \n");
        scanf("%i", &op);
        
    }
    while (op != 0);
    return 0;
    
} 
    
