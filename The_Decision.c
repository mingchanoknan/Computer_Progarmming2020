#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if (m>n){
        while (m>=n){
            printf("%d ",m);
            m--;
        }
    }
    else{
        while (m<=n){
            printf("%d ",m);
            m++;
        }
    }
    return 0;
}