#include <stdio.h>
int main(){
    double n1,n2;
    scanf("%lf,%lf",&n1,&n2);

    double ans1 = n1+n2;
    double ans2 = n1-n2;
    double ans3 = n1*n2;
    double ans4 = n1/n2;

    printf("The sum of the given numbers : %f\n",ans1);
    printf("The difference of the given numbers : %f\n",ans2);
    printf("The product of the given numbers : %f\n",ans3);
    printf("The quotient of the given numbers : %f\n",ans4);
    return 0;
}