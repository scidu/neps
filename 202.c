#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c, maior = -999999;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &matriz[l][c]);

            if (matriz[l][c] > maior)
            {
                maior = matriz[l][c];
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (matriz[l][c] == maior)
            {
                matriz[l][c] = -1;
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d", matriz[l][c]);
            if (c < 3)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}