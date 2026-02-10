#include <stdio.h>
int main() {
    int unit;
    int rate;
    int bill;

    scanf("%d",& units);

    switch(units / 100){
    case 0:
       rate=1;
       break;
    case 1:
        rate=2;
        break;
    case 2:
        rate=3;
        break;
    case 3:
        rate=4;
        break;
    default
        rate= 5;
}  
bill = units*rate;
printf("total bill%d", bill);

    return 0;
}
