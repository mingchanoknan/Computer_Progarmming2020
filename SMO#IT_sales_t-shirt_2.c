#include <stdio.h>
#include <math.h>
int main(){
    float price,percent,num;
    scanf("%f",&price);
    scanf("%f",&percent);
    scanf("%f",&num);

    float buy2free1 = floor(num/3)*(price*2)+fmod(num,3)*price;
    float discount = num*price*(100-percent)/100;

    if (buy2free1 >= discount)
        printf("Discount %.f%%\n%.2f",percent,discount);
        
    else
        printf("Buy 2 Get 1\n%.2f",buy2free1);
    return 0;
}