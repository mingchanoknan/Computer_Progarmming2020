#include <stdio.h>
#include <string.h>
#include <math.h>
int num,spece;
void check(char w[50]){
    if (num%2 == 0){
        if (strlen(w)%2 == 0){
            //spece = ceil((num-strlen(w))/2)-1;
            printf("*");
            for (int j = 0; j < ((num-strlen(w))/2)-1; j++)
            {
                printf(" ");
            }
            printf("%s",w);
            for (int j = 0; j < ((num-strlen(w))/2)-1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        else{
            printf("*");
            for (int j = 0; j < ((num-strlen(w))/2); j++)
            {
                printf(" ");
            }
            printf("%s",w);
            for (int j = 0; j < ((num-strlen(w))/2)-1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
    }
    else{
        if (strlen(w)%2 != 0){
            printf("*");
            for (int j = 0; j < ((num-strlen(w))/2)-1; j++)
            {
                printf(" ");
            }
            printf("%s",w);
            for (int j = 0; j < ((num-strlen(w))/2)-1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        else{
            printf("*");
            for (int j = 0; j < ((num-strlen(w))/2); j++)
            {
                printf(" ");
            }
            printf("%s",w);
            for (int j = 0; j < ((num-strlen(w))/2)-1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
    }
}
int main(){
    char w1[51],w2[41];
    scanf("%d",&num);
    scanf(" %[^\n]s",&w1);
    scanf(" %[^\n]s",&w2);
    for (int i=0 ;i<num;i++){
        printf("*");
    }
    printf("\n");
    check(w1);
    printf("\n");
    check(w2);
    printf("\n");
    for (int i=0 ;i<num;i++){
        printf("*");
    }
    

}
