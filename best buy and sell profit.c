#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int price[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }

    int min = price[0];
    int maxProfit = price[1] - price[0];

    for(i = 1; i < n; i++) {
        if(price[i] - min > maxProfit) {
            maxProfit = price[i] - min;
        }

        if(price[i] < min) {
            min = price[i];
        }
    }

    printf("%d", maxProfit);

    return 0;
}
