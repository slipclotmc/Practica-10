/* FI UNAM fundamentos de programación
    Práctica 10 - programa 4c*/

#include<stdio.h>
int main()
{
 int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int i, cont=0, *ap;
 ap = *matriz;//Esta sentencia es análoga a: ap = &matriz[0][0];
 printf("Imprimir Matriz\n");
 i=0;
 do
 {
    if (cont == 3) //Se imprimió un renglón y se hace un salto de línea
    {
        printf("\n");
        cont = 0; //Inicia conteo de elementos del siguiente renglón
    }
    printf("%d\t",*(ap+i)); //Se imprime el siguiente elemento de la matriz
    cont++;
    i++;
 }
 while (i<9);
 printf("\n");
 return 0;
}
