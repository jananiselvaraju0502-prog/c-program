#include <stdio.h>

int main() {
    int cash, n;

    scanf("%d", &cash);
    scanf("%d", &n);

    int withdraw[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &withdraw[i]);
    }

    int i = 0;
    int success = 0;

    while(i < n && cash >= withdraw[i]) {
        cash -= withdraw[i];
        success++;
        i++;
    }

    printf("Successful Withdrawals: %d\n", success);
    printf("Remaining Cash: %d\n", cash);

    return 0;
}
