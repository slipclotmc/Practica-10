#include<stdio.h>
int main()
{
 int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int i, j;
  
 printf("Imprimir Matriz\n");
  
 i=0;
 while(i<3) //Representa al renglón del arreglo
    {
     j=0;
     while (j<3)//Representa a la columna del arreglo
       {
         printf("%d," matriz[i][j]);
         j++;
       }
     printf("\n");
     i++;
    }
 return 0;
}
