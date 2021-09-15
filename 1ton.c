#include <stdio.h>
int main(){
    int num ,count;
    scanf("%d",&num);
    count = 1;

    while (count<=num)
    {
        printf("%d ",count);
        count++;
    }
    return 0;

}