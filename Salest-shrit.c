#include <stdio.h>
int main(){
    float price, per_discount, num;
    scanf("%f",&price);
    scanf("%f",&per_discount);
    scanf("%f",&num);

    float after_sale = price*(100-per_discount)/100;

    printf("%.2f",after_sale*num);
    return 0;
}