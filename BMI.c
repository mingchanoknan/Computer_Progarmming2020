#include <stdio.h>
int main(){
    float height, wight,bmi;
    scanf("%f",&height);
    scanf("%f",&wight);
    float h = height/100;
    bmi = wight/(h*h);
    printf("%f", bmi);
    return 0;

}