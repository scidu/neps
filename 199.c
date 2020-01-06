#include <stdio.h>

int main()
{
    int matriz[3][3];
    int linhas[3];
    int i, l, c, somalinhas = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    for (l = 0; l < 3; l++)
    {
        somalinhas = 0;
        for (c = 0; c < 3; c++)
        {
            somalinhas += matriz[l][c];
        }
        linhas[l] = somalinhas;
    }

    for (i = 0; i < 3; i++)
    {
        printf("Linha %d: %d\n", i, linhas[i]);
    }

    return 0;
}