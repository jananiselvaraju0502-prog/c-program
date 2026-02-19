#include <stdio.h>
int main() {
    char str[]="12345";
    int product = 1;
    for(int i=0;str[i];i++){
        product*=(str[i]='0');
    }
          printf("%d",product);
    
    return 0;
}
