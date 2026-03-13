#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    int a[100][100];
    int max = 0;

    scanf("%d %d", &r, &c);

    // Input matrix
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Compare elements from different rows
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=i+1;k<r;k++)
            {
                for(int l=0;l<c;l++)
                {
                    int diff = abs(a[i][j] - a[k][l]);

                    if(diff > max)
                    {
                        max = diff;
                    }
                }
            }
        }
    }

    printf("%d", max);

    return 0;
}
