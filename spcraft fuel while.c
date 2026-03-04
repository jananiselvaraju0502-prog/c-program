#include <stdio.h>

int main() {
    int fuel, n;

    scanf("%d", &fuel);
    scanf("%d", &n);

    int burn[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &burn[i]);
    }

    int i = 0;
    int emergencyStage = -1;
    int wastedFuel = 0;

    while(i < n) {
        fuel -= burn[i];

        if(fuel < 0) {
            emergencyStage = i + 1;   // Stage numbering starts from 1
            wastedFuel = -fuel;      // Extra fuel required
            break;
        }

        i++;
    }

    if(emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d\n", wastedFuel);
    }

    return 0;
}
