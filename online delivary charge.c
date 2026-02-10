#include <stdio.h>
int main() {
    int orderaccount, speedtype;
    int delivarycharge;

    scanf("%d",&orderaccount);
    scanf("%d",&speedtype);

    switch(speedtype) {
        case 1:  //normel
            delivarycharge=50;
            break;
        case 2:  //express
            if(order amount < 1000){
               delivarycharge = 100;
          } else {
               delivarycharge = 0; //
          }
          break;

       defauld:
            return 0;
    }
    print("delivary %d",delivarycharge);
    return 0;
}
