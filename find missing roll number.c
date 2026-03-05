#include <stdio.h>
int main() {
    int n,i,num;
    int sum=0,experted,missing;
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++)
    {
        scanf("%d",&num);
        sum=sum+num;
    }
       expected = n*(n+1)/2;
       missing=expected-sum;
       printf("%d",missing);
     return 0;
}
