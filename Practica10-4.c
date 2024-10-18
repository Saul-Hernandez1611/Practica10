#include <stdlib.h>

int main(void) { 
    int i, j;
    int x = -1;
    int mat[10][10];
    int suma;
    int vert[10];
    int horiz[10];

    printf("\n");
    printf("Recorrido de la matriz\n");
    printf("\n");

    for (j = 0; j < 10; j++)
        for (i = 0; i < 10; i++) {
            x = x + 1;
            mat[i][j] = x;
        }


    for (j = 0; j < 10; j++) {
        for (i = 0; i < 10; i++)
            printf("%3d\t", mat[j][i]);
    }
    printf("\n\n");

    for(i = 0; i < 10; i++) {
        suma = 0;
        for (j = 0; j < 10; j++) {
            suma += mat[i][j];
            vert[i] = suma;
        }
    }

    for (j = 0; j < 10; j++) {
        suma = 0;
        for (i = 0; i < 10; i++) {
            suma += mat[i][j];
            horiz[j] = suma;
        }
    }

    for (i = 0; i < 10; i++)
        printf("fila %d\n", vert[i]);
    for (j = 0; j < 10; j++)
        printf("columna %d\n", horiz[j]);
    printf("\n\n");
return 0;
}
