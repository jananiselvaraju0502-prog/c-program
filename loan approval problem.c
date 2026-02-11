#include <stdio.h>

int main() {
    int loanType, creditScore;

    scanf("%d", &loanType);
    scanf("%d", &creditScore);

    switch(loanType) {
        case 1:  // Home Loan
            if(creditScore >= 700) {
                printf("Approved");
            }
            else if(creditScore >= 650 && creditScore <= 699) {
                printf("Manual Review");
            }
            else {
                printf("Rejected");
            }
            break;

        case 2:  // Personal Loan
            if(creditScore >= 700) {
                printf("Approved");
            }
            else if(creditScore >= 650 && creditScore <= 699) {
                printf("Manual Review");
            }
            else {
                printf("Rejected");
            }
            break;

        default:
            printf("Invalid Loan Type");
    }

    return 0;
}
