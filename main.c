#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char empleado,estudios;
    int sueldo,ndemp,antiguedad,canthijos;
    float sueldonuevo,promedio,sueldop=0;

    printf("Desea ingresar un empleado[S o N]: ");
    scanf("%c",&empleado);
    fflush(stdin);

    while(empleado!='n')
    {
        sueldonuevo=0;
        ndemp++;
        printf("Ingrese sueldo: ");
        scanf("%d",&sueldo);
        fflush(stdin);
        printf("Ingrese antiguedad: ");
        scanf("%d",&antiguedad);
        fflush(stdin);
        printf("Ingrese cantidad de hijos: ");
        scanf("%d",&canthijos);
        fflush(stdin);
        printf("Tiene estudios superiores[S o N]: ");
        scanf("%c",&estudios);
        fflush(stdin);

        if(antiguedad>=10)
        {
            sueldonuevo=sueldonuevo+sueldo*0.1;
        }
        if(canthijos>=2)
        {
            sueldonuevo=sueldonuevo+sueldo*0.1;
        }
        if(canthijos==1)
        {
            sueldonuevo=sueldonuevo+sueldo*0.05;
        }
        if(estudios=='s')
        {
            sueldonuevo=sueldonuevo+sueldo*0.05;
        }
        sueldonuevo=sueldonuevo+sueldo;
        printf("Empleado numero: %d, Sueldo base: %d, Sueldo nuevo: %.2f\n",ndemp,sueldo,sueldonuevo);
        promedio=promedio+sueldonuevo;

        printf("Desea ingresar un empleado[S o N]: ");
        scanf("%c",&empleado);
        fflush(stdin);
    }
        sueldop=promedio/ndemp;
        printf("El sueldo promedio es de: %.2f",sueldop);

    return 0;
}
