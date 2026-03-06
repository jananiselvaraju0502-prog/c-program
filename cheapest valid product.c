#include <stdio.h>

int main() {
    int n, i;
    int found = 0;
    
    scanf("%d", &n);
    int price[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }

    int min = 0;

    for(i = 0; i < n; i++) {
        if(price[i] > 0) {
            if(found == 0 || price[i] < min) {
                min = price[i];
                found = 1;
            }
        }
    }

    if(found == 1)
        printf("%d", min);
    else
        printf("No positive");

    return 0;
}
