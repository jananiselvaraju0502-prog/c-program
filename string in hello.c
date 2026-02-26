#include <stdio.h>
int main() {
    char str[]="Hello";
    char * p = str;
    printf("%c",*(p+3)-3);    
    return 0;
}
