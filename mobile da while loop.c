#include <stdio.h>

int main() {
    int dataPack, n;

    scanf("%d", &dataPack);
    scanf("%d", &n);

    int usage[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &usage[i]);
    }

    int day = 0;
    int exhaustedDay = -1;
    int overused = 0;

    while(day < n) {
        dataPack -= usage[day];

        if(dataPack <= 0) {
            exhaustedDay = day + 1;  // Days start from 1
            if(dataPack < 0)
                overused = -dataPack;
            break;
        }

        day++;
    }

    if(exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}
