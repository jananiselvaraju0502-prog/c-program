#include<stdio.h>

int main()
{
    int R,C;
    scanf("%d %d",&R,&C);

    int a[R][C];

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int maxCount=0;
    int frequentValue;

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            int count=0;

            for(int x=0;x<R;x++)
            {
                for(int y=0;y<C;y++)
                {
                    if(a[i][j]==a[x][y])
                    count++;
                }
            }

            if(count>maxCount)
            {
                maxCount=count;
                frequentValue=a[i][j];
            }
        }
    }

    printf("%d",frequentValue);

    return 0;
}
