#include <stdio.h>

int main()
{
    int r, c;
    int matrix[100][100];
    int count = 0;

    scanf("%d %d", &r, &c);

    // Input matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check dominant rows
    for(int i = 0; i < r; i++)
    {
        int diagonal = matrix[i][i];
        int sum = 0;

        for(int j = 0; j < c; j++)
        {
            if(j != i)
            {
                sum += matrix[i][j];
            }
        }

        if(diagonal > sum)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
