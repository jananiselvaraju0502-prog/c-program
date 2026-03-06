#include <stdio.h>

int main() {
    int n, i, j = 0;

    scanf("%d", &n);
    int orders[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &orders[i]);
    }

    // Move non-zero elements forward
    for(i = 0; i < n; i++) {
        if(orders[i] != 0) {
            orders[j] = orders[i];
            j++;
        }
    }

    // Fill remaining positions with 0
    while(j < n) {
        orders[j] = 0;
        j++;
    }

    // Print modified array
    for(i = 0; i < n; i++) {
        printf("%d ", orders[i]);
    }

    return 0;
}
