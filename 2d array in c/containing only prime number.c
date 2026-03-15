#include <stdio.h>

int isPrime(int n)
{
    int i;
    if(n <= 1)
        return 0;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int r, c, i, j, count = 0, flag;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        flag = 1;

        for(j = 0; j < c; j++)
        {
            if(!isPrime(a[i][j]))
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
            count++;
    }

    printf("%d", count);

    return 0;
}
