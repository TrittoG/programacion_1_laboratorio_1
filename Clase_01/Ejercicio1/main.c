#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char apellido;
    float sueldo;
    int aumento;


    printf("ingrese un numero ");
    scanf("%d" ,&numeroUno);
    printf("ingrese orto numero ");
    scanf("%d" , &numeroDos);
    printf("ingrese otro numero");
    scanf("%d", &numeroTres);
    printf("%d %d %d \n" ,numeroUno, numeroDos ,numeroTres);

   if(numeroUno > numeroDos & numeroUno > numeroTres)
   {
       mayor = numeroUno;

    }
    else
    {
        if(numeroDos > numeroTres)
        {
            mayor= numeroDos;
        }
        else
        {
            mayor = numeroTres;
        }
    }

    printf("el numero maximo es %d" ,mayor);





    return 0;
}
