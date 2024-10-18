#include <stdio.h>

#include <stdio.h>

int main()
{
  int matriz[3][3]= {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}; 
  int i = 1;
  
  do
    {
      j = 1;
      do
        {
          while(j <= 3) 
          j = j + 1;
        }
        printf("\n");
        j = 0;
        {
        while(i <= 3)
        printf("%d ", matriz[i-1][j-1]);
        i = i + 1;
        i = 0;
        }
      printf("\n")
  }
return 0;
}
