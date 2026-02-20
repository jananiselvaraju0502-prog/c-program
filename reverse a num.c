#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int reverse = 0;
    while(n>0){
        int dig = n%10;
        reverse = reverse * 10+dig;
        n=n/10;
    }
    printf("%d",reverse); 
    return 0;
}
