#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int attempts[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &attempts[i]);
    }

    int i = 0;
    int consecutiveFail = 0;
    int totalFail = 0;
    int lockAttempt = -1;

    while(i < n) {
        if(attempts[i] == 0) {
            consecutiveFail++;
            totalFail++;

            if(consecutiveFail == 3 && lockAttempt == -1) {
                lockAttempt = i + 1;   // Attempts start from 1
            }
        } else {
            consecutiveFail = 0;  // Reset on success
        }
        i++;
    }

    if(lockAttempt == -1)
        printf("Lock Triggered At Attempt: Not Locked\n");
    else
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);

    printf("Total Failed Attempts: %d\n", totalFail);

    return 0;
}
