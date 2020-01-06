#include <stdio.h>

int main()
{
    int matriz[3][3];
    int colunas[3];
    int i, l, c, somacoluna;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    for (c = 0; c < 3; c++)
    {
        somacoluna = 0;
        for (l = 0; l < 3; l++)
        {
            somacoluna += matriz[l][c];
        }
        colunas[c] = somacoluna;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Coluna %d: %d\n", i, colunas[i]);
    }

    return 0;
}