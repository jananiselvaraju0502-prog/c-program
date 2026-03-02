#include <stdio.h>

int main() {
    int N;
    int balance;
    int transaction;
    int i = 0;
    int lowDays = 0;

    // Input
    scanf("%d", &N);
    scanf("%d", &balance);

    while (i < N) {
        scanf("%d", &transaction);

        balance = balance + transaction;

        if (balance < 2000) {
            lowDays++;
        }

        i++;
    }

    // Output
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowDays);

    return 0;
}
