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

    int count = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {

            int isRowMin = 1;
            int isColMax = 1;

            // Check row minimum
            for(int k = 0; k < c; k++) {
                if(a[i][k] < a[i][j]) {
                    isRowMin = 0;
                    break;
                }
            }

            // Check column maximum
            for(int k = 0; k < r; k++) {
                if(a[k][j] > a[i][j]) {
                    isColMax = 0;
                    break;
                }
            }

            if(isRowMin && isColMax) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
