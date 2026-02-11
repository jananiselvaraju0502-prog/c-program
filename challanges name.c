#include <stdio.h>

int main() {
    int mode;
    char category;

    scanf("%d %c", &mode, &category);

    switch(mode) {
        case 1:   // Online
            switch(category) {
                case 'R':
                case 'r':
                    printf("₹5000");
                    break;
                case 'S':
                case 's':
                    printf("₹3000");
                    break;
                default:
                    printf("Invalid Category");
            }
            break;

        case 2:   // Offline
            switch(category) {
                case 'R':
                case 'r':
                    printf("₹9000");
                    break;
                case 'S':
                case 's':
                    printf("₹7000");
                    break;
                default:
                    printf("Invalid Category");
            }
            break;

        default:
            printf("Invalid M
