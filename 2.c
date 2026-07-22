#include <stdio.h>
int main() {
    int number;


    printf("enter a number");
    scanf("%d",&number);


    if(number > 0){
        printf("positive\n");
    }  else if(number < 0){
        printf("negative\n");
    }  else{
        printf("zero\n");
    }
    
    return 0;
}