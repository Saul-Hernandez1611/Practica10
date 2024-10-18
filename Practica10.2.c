/*ERCIK SAUL GARCIA HERNANDEZ
FUNDAMENTOS DE PROGRAMACION
LABORATORIO DE PROGRAMACION
PRACTICA NO. 10*/

#include <stdio.h>

#include <stdio.h>

int main()
{
  int matriz[3][3]= {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; 
  int i = 1, j = 1;

  while(i <= 3)
  {
    while(j <= 3)
    {
        printf("%d ", matriz[i-1][j-1]);
        j = j + 1;
    }
  printf("\n");
  j = 0;
  i = i + 1;
  }
return 0;
}
