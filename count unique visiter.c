#include <stdio.h>

int main() {
    int n, arr[100];
    int i, j, count = 0, unique;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        unique = 1;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }

        if(unique) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
