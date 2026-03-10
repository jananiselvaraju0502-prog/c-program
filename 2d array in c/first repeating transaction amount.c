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

    int found = 0;

    // Traverse row-wise
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {

            // Compare with all future elements
            for(int x = i; x < R; x++) {
                int start = (x == i) ? j + 1 : 0;

                for(int y = start; y < C; y++) {
                    if(a[i][j] == a[x][y]) {
                        printf("%d", a[i][j]);
                        found = 1;
                        break;
                    }
                }

                if(found) break;
            }

            if(found) break;
        }

        if(found) break;
    }

    return 0;
}
