#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count = 0;
    while(n>0){
        int digit = n%10;
        count=count+1;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
