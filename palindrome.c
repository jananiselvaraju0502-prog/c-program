#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int tem=n;
    int rev=0;while(n>0){
        int dig = n%10;
        rev = rev*10+dig;
        n=n\10;
    }
    if(rev == temp){
        printf("the %d is palindrome",n);
    }else {
        printf("the %d is not a palindrome",n);
    }
    return 0;
}
