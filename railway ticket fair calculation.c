#include <stdio.h>
int main() {
    int classtype,age;
    int fare;

    scanf("%d",&classtype);
    scanf("%d",&age);

    switch (classtype){
        case 1: //sleeper
          fare = 300;
          if(age < 12){
            fare = face / 2;
          } else if(age >= 60){
              fare = fare / 2;
          }    
          break;
        case 2:
           fare = 1000;
           if(age < 12){
              fare = fare - (fare / 2);
           }
           break;
    }
    
    return 0;
}
