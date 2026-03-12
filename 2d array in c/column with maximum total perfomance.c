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

    int maxSum = -100000, colIndex = 0;

    for(j = 0; j < C; j++) {
        int sum = 0;
        for(i = 0; i < R; i++) {
            sum += matrix[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            colIndex = j;
        }
    }

    printf("%d", colIndex);

    return 0;
}
