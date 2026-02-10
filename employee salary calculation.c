#include <stdio.h>

int main() {
    int code, experience;
    int baseSalary = 0, bonus = 0, totalSalary;

    scanf("%d", &code);
    scanf("%d", &experience);

    switch (code) {
        case 1:  // Developer
            baseSalary = 50000;
            break;

        case 2:  // Tester
            baseSalary = 35000;
            break;

        default:
            printf("Invalid designation code");
            return 0;
    }

    if (experience >= 3) {
        bonus = experience * 5000;
    }

    totalSalary = baseSalary + bonus;

    printf("Salary ₹%d", totalSalary);

    return 0;
}
