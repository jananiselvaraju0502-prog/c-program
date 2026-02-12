#include <stdio.h>

int main() {
    int role, time;

    // Input role and time
    scanf("%d %d", &role, &time);

    switch(role) {
        case 1:
            printf("Full Access");
            break;

        case 2:
            if(time >= 9 && time <= 18) {
                printf("Limited Access");
            } else {
                printf("Access Denied");
            }
            break;

        default:
            printf("Access Denied");
    }

    return 0;
}
