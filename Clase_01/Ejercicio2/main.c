#include <stdio.h>
#include <stdlib.h>

int main()
{

    char apellido;
    float sueldo;
    int aumento;
    float sueldoParcial;
    float sueldoTotal;



    printf("ingrese su sueldo ");
    scanf("%f" , &sueldo);

    while(sueldo < 8000)
    {
        printf("ingrese su sueldo ");
        scanf("%f" , &sueldo);
    }

    printf("ingrese un apellido  ");
    fflush(stdin);
    scanf("%c" ,&apellido);


    printf("ingrese el porcentaje de aumento");
    scanf("%d" , &aumento);

    while(aumento < 0 || aumento > 100)
    {
        printf("ingrese el porcentaje de aumento");
        scanf("%d" , &aumento);
    }

    printf("el apellido %c cobra un sueldo de %.2f con un aumento de  %d %% \n" ,apellido , sueldo, aumento);

    sueldoParcial = sueldo * aumento/100;
    sueldoTotal = sueldo + sueldoParcial;

    printf("el salario con el aumento es: %.2f" ,sueldoTotal);


    return 0;
}
