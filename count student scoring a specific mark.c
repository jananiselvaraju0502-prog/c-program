#include <stdio.h>
int main() {
    int n,x,count=0;
    scanf("%d",&n);
    int mark[n];
    for(int i=0;i<n;i++){
        scanf("%d",&mark[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
      if(mark[i]==x){
        count++;
      }
    }
    printf("%d",count);
    return 0;
}
