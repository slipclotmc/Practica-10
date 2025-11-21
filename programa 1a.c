#include<stdio.h>
int main()
{
 int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 int i, j; 
  
 printf("Imprimir Matriz\n");  
  
 for (i=0 ; i<3 ; i++) //Representa al renglón del arreglo
   {
     for (j=0 ; j<3 ; j++)//Representa a la columna del arreglo 
     {
       printf("%d, ",matriz[i][j]);
     }
     printf("\n");
   }
 return 0;
}
