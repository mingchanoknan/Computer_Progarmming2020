#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    if (num == 15)
        printf("%d",360*num);
    else{
        if (num<15)
            printf("%d",240*num);
        else
            printf("%d",480*num);
    }
    return 0;
}