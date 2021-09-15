#include <stdio.h>
#include <math.h> 
int main(){
    float n1,n2;
    scanf("%f", &n1);
    scanf("%f", &n2);

    double result1 = pow(n1, 2);
    double result2 = pow(n2 , 2);
    double ans = result1+result2;
    printf("%.2f", sqrt(ans));

    return 0;

}