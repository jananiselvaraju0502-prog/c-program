#include <stdio.h>

int main() {
    int n, i, j, target, found = 0;

    scanf("%d", &n);
    int price[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(price[i] + price[j] == target) {
                printf("%d %d", price[i], price[j]);
                found = 1;
                break;
            }
        }
        if(found == 1)
            break;
    }

    if(found == 0) {
        printf("No pair");
    }

    return 0;
}
