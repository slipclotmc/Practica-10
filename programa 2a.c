#include<stdio.h>
int main()
{
 int i,j,a[5][5];
  
 for (i=0 ; i<5 ; i++)//Representa al renglón del arreglo
 {
   for (j=0 ; j<5 ; j++)//Representa a la columna del arreglo
   {
     a[i][j]=i+j;
     printf("\t%d", a[i][j]);
   }
   printf("\n");
 }
  
 return 0;
}
