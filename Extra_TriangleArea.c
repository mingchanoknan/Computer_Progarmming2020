#include <stdio.h>

int main(){
    double base,height,ans;
    scanf("%lf\n%lf",&base,&height);
    ans = 0.5*base*height;
    printf("%.3f",ans);
    return 0;
}