#include <stdio.h>
int main() {
    int plantype;
    float dataused;

    scanf("%d",&plantype);
    scanf("%d",&dataused);

    switch(plantype) {
        case 1:
           if(dataused <= 1.0)
              printf("normal speed");
            else
              printf(" speed reduced");
            break;
        case 2;
            if(dataused <= 2.0)
               printf("normal speed");
            else
               printf("extra charge applied");
            break;

        default
            
            if(dataused <= 2.0)
                printf("extra charge applied");
            else
                printf("normal speed");    
     
    }
    
    return 0;
}
