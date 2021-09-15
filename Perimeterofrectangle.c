#include <stdio.h>
int main(){
    double width,length;
    scanf("%lf",&width);
    scanf("%lf",&length);
    double ans1 = width*2;
    double ans2 = length*2;
    double ans = ans1+ans2;
    printf("Perimeter of rectangle = %.4f units",ans);
    return 0;

}