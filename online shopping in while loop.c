#include <stdio.h>

int main() {
    int balance, n;

    scanf("%d", &balance);   // Wallet balance
    scanf("%d", &n);         // Number of purchases

    int purchase[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &purchase[i]);
    }

    int i = 0;
    int success = 0;

    while(i < n && balance >= purchase[i]) {
        balance -= purchase[i];
        success++;
        i++;
    }

    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d\n", balance);

    return 0;
}
