#include <stdio.h>

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
        int start = 0;
        int end = C - 1;
        int isPalindrome = 1;

        while(start < end) {
            if(matrix[i][start] != matrix[i][end]) {
                isPalindrome = 0;
                break;
            }
            start++;
            end--;
        }

        if(isPalindrome == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
