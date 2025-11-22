/* FI UNAM fundamentos de programación
    Práctica 10 - programa 2c*/

#include<stdio.h>
int main()
{
 int i,j,a[5][5];
 i=0;
 
 do //Representa al renglón del arreglo
    {
    j=0;
    do //Representa a la columna del arreglo
        {
        a[i][j]=i+j;
        printf("\t%d, ",a[i][j]);
        j++;
        }
    while (j<5);
    printf("\n");
    i++;
    }
     while (i<5);
     
 return 0;
}
