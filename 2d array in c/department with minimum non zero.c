#include <stdio.h>

int main() {
    int R, C, i, j;
    int matrix[100][100];

    scanf("%d %d", &R, &C);

    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int minSum = 100000, rowIndex = -1;

    for(i = 0; i < R; i++) {
        int sum = 0;

        for(j = 0; j < C; j++) {
            sum += matrix[i][j];
        }

        if(sum != 0 && sum < minSum) {
            minSum = sum;
            rowIndex = i;
        }
    }

    printf("%d", rowIndex);

    return 0;
}
