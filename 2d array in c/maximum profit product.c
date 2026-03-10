#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];

    // Input matrix
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxProduct = -1000000;

    // Compare elements from different rows
    for(int i = 0; i < R; i++) {
        for(int k = i + 1; k < R; k++) {
            for(int j = 0; j < C; j++) {
                for(int l = 0; l < C; l++) {
                    int product = a[i][j] * a[k][l];
                    if(product > maxProduct) {
                        maxProduct = product;
                    }
                }
            }
        }
    }

    printf("%d", maxProduct);

    return 0;
}
