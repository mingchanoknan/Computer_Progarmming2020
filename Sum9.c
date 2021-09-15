#include <stdio.h>
int main(){
    int num,sum;

    while (num != (-9))
    {
        scanf("%d",&num);
        if (num != (-9))
            sum += num;
    }
    printf("%d",sum);
    return 0;
}