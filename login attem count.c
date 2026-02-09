#include <stdio.h>
int main() {
    int attemps;
    scanf("%d", & attemps);
     if(attemps > 3)
        printf("account locked");
    else
        printf("login account");
    return 0;
}
