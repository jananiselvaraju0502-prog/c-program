#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int scale[n];
    for(int i=0;i<0;i++){
        scanf("%d",&scale[n]);
    }
    int sorted=1;
    for(int i=0;i<n-1;i++){
        if(scale[i]>scale[i+1]){
            sorted=0;
            break;
        }
    }
    if(sorted==1)
       printf("yes");
    else
    printf("no");
    return 0;
}
