#include <stdio.h>

int main() {
    int roomType;
    char season;

    scanf("%d", &roomType);
    scanf(" %c", &season);  // space before %c to skip newline

    switch (roomType) {
        case 1:  // Standard
            switch (season) {
                case 'A':
                    printf("₹2500");
                    break;
                case 'B':
                    printf("₹2000");
                    break;
            }
            break;

        case 2:  // Deluxe
            switch (season) {
                case 'C':
                    printf("₹4000");
                    break;
                case 'D':
                    printf("₹3000");
                    break;
            }
            break;
    }

    return 0;
}
