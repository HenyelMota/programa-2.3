#include <stdio.h>

int main()
{
    float PRO;                                    /*declaramosPRO comovariable de tipo float*/
    printf ("ingrese el promedio del alumno: ");  /*se mostrara el texto que indica que debe ingresar el promediodel alumno*/
    scanf ("%f", &PRO);                           /*el dato propotcionado se almacenara en la variable PRO*/
    if (PRO >= 6.)                                /*se abre una condicion que dice que si el promedio "PRO" es mayor o igual a 6 se ejecutara la condicion siguiente*/
    {
        printf("\nAprobado");                     /*si la condicion es verdadera se ejecutara esta linea de codigo*/
    }else                                         /*si la condicion if no se cumple se ejecutara esta condicion*/
    {
        printf("\nReprobado");
    }
    return 0;
}
