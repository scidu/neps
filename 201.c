#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c, ld = 0, cd = 2, dp = 0, ds = 0;

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            scanf("%d", &matriz[l][c]);
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (l == c)
            {
                dp += matriz[l][c];
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        ds += matriz[ld][cd];
        ld++;
        cd--;
    }

    printf("Diagonal principal: %d\nDiagonal secundaria: %d", dp, ds);

    return 0;
}