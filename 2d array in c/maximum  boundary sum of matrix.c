#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;

    // First row
    for(int j = 0; j < C; j++)
        sum += a[0][j];

    // Last row
    for(int j = 0; j < C; j++)
        sum += a[R-1][j];

    // First column (excluding corners)
    for(int i = 1; i < R-1; i++)
        sum += a[i][0];

    // Last column (excluding corners)
    for(int i = 1; i < R-1; i++)
        sum += a[i][C-1];

    printf("%d", sum);

    return 0;
}
