/*ERCIK SAUL GARCIA HERNANDEZ
FUNDAMENTOS DE PROGRAMACION
LABORATORIO DE PROGRAMACION
PRACTICA NO. 10*/

#include <stdio.h>

int main()
{
  int matriz[3][3]= {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; 
  int i, j;
  printf("imprimir matriz\n");

  for(i = 1; i < 3; i++)
  {
    for(j = 1; j < 3; j++)
    {
      printf("%d","(", ")", matriz[i][j]);
    }
  printf("\n");
  }
return 0;
}
