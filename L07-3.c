#include <stdio.h>
#include <math.h>
double perimeter(double a,double b) {
    double c = hypot(a,b);
    return a+b+c;
}

double area(double a,double b){
    double c = (0.5)*a*b;
    return c;
}
int main(){
    double a,b;
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("Perimeter: %.2f\n",perimeter(a,b));
    printf("Area: %.2f",area(a,b));
    return 0;
}