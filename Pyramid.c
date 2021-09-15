#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for (j=1;j<=n+i;j++)
            if (i+j>=n)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    for (i=i-2;i>=0;i--){
        //printf("%d",i);
        for  (j=1;j<=n+i;j++)
            if(i+j>=n)
                printf("*");
            else
                printf(" ");
        printf("\n");

    }
        

    return 0;
}

  	