/* FI UNAM fundamentos de programación
    Práctica 10 - programa 1c*/

#include<stdio.h>
int main()
{ 
 int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int i, j;
 
 printf("Imprimir Matriz\n");
 i=0;
 
 do //Representa al renglón del arreglo
    {
    j=0;
    do //Representa a la columna del arreglo
        {
        printf("%d, ",matriz[i][j]);
        j++;
        }
    while (j<3);
        {
        printf("\n");
        i++;
        }
    }
    while(i<3);
 return 0;
}
