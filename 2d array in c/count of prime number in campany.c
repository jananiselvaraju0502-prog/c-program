#include <stdio.h>

int isPrime(int num) {
    int i;
    if(num <= 1)
        return 0;

    for(i = 2; i <= num/2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int R, C, i, j;
    int matrix[100][100];
    int count = 0;

    scanf("%d %d", &R, &C);

    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            if(isPrime(matrix[i][j])) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
