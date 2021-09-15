#include <stdio.h>
#include <stdbool.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

    bool ans1 = (a>b && a<c) || (a>c && a<b);
    bool ans2 = (b>a && b<c) || (b>c && b<a);
    printf("%.2f",(ans1 ? a :(ans2 ?b : c)));

    return 0;
}
