#include <stdio.h>
int main() {
    int amount;
    scanf("%d" , &amount);
    if(amount %  100 ==0)
        printf("valid withdrawel");
    else
        printf("invalid withdrawel");
    
    return 0;
}
