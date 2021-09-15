#include <stdio.h>
int main(){
    int num,i,j;
    scanf("%d",&num);

    for(i=0;i<num;i++){
        for(j=(-num+1); j<num ; j++){
            if (i<-j|| i< j )
                printf(" ");
        else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}