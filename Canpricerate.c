#include <stdio.h>
#include <math.h>
int main(){
    double price, d, h;
    scanf("%lf",&price);
    scanf("%lf",&d);
    scanf("%lf",&h);

    double v=h*3.14159265359*pow(d/2,2);
    printf("Volume : %.2fml\n",v);
    printf("Baht/ml : %.4f",price/v);
    return 0;
}