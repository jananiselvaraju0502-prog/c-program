#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int maxProduct;
    int index = 0;

    for(int i=0;i<R;i++){
        int product = 1;

        for(int j=0;j<C;j++){
            product = product * a[i][j];
        }

        if(i == 0 || product > maxProduct){
            maxProduct = product;
            index = i;
        }
    }

    printf("%d", index);

    return 0;
}
