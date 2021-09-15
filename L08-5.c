#include <stdio.h>

void swap(double *a, double *b){
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    double f1,f2,f3;
    scanf("%lf %lf %lf",&f1,&f2,&f3);
    swap(&f1,&f2);
    swap(&f1,&f3);
    printf("%.2f %.2f %.2f",f1,f2,f3);
    return 0;

}