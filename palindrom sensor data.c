#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int palindrome = 1;

    for(i = 0; i < n/2; i++) {
        if(a[i] != a[n-i-1]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
