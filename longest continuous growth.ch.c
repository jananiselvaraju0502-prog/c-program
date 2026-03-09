#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 1, max = 1;

    for(i = 1; i < n; i++) {
        if(a[i] > a[i-1]) {
            count++;
        } else {
            count = 1;
        }

        if(count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}
