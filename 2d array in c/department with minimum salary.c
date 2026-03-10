#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Input matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int minIndex = 0;
    float minAvg;

    // Calculate average for first department
    int sum = 0;
    for(int j = 0; j < c; j++) {
        sum += a[0][j];
    }
    minAvg = (float)sum / c;

    // Check remaining departments
    for(int i = 1; i < r; i++) {
        sum = 0;
        for(int j = 0; j < c; j++) {
            sum += a[i][j];
        }

        float avg = (float)sum / c;

        if(avg < minAvg) {
            minAvg = avg;
            minIndex = i;
        }
    }

    printf("%d", minIndex);

    return 0;
}
