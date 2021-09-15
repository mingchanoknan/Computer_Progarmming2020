#include <stdio.h>
#define PI 3.14

int main(){
    int R,r;
    scanf("%d\n%d",&R,&r);
    float ans;
    ans = (PI*R*R) - (PI*r*r);
    printf("Donut Area is %.2f!",ans);
}