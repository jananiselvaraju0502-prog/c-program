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

    int maxLen = 0;
    int rowIndex = -1;

    for(int i = 0; i < R; i++) {
        int len = 1;

        for(int j = 1; j < C; j++) {
            if((a[i][j] % 2 == 0 && a[i][j-1] % 2 != 0) ||
               (a[i][j] % 2 != 0 && a[i][j-1] % 2 == 0)) {
                len++;
            } else {
                break;
            }
        }

        if(len > maxLen) {
            maxLen = len;
            rowIndex = i;
        }
    }

    printf("%d", rowIndex);

    return 0;
}
