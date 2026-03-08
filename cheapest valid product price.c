#include <stdio.h>

int main() {
    int n, price;
    int min = 1000000;   // large value

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &price);

        if(price > 0 && price < min) {
            min = price;
        }
    }

    if(min == 1000000)
        printf("No positive");
    else
        printf("%d", min);

    return 0;
}
