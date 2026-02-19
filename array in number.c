#include <stdio.h>
int main() {
    int arr[2][3] = {{1,2,3,},{4,5,6}};
    int*p = & arr[0][0];
    printf("%d",*(p+4));
    return 0;
}
