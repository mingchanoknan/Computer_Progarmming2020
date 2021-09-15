#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
int main(){
    int num1, num2, num31, num32, num33, num34, buy;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num31);
    scanf("%d", &num32);
    scanf("%d", &num33);
    scanf("%d", &num34);
    scanf("%d", &buy);
    int ans=0;
    if(buy==num1){
        ans+=6000000;
    }
    if((buy%100)==num2){
        ans+=2000;
    }
    if((buy/1000)==num31){
        ans+=4000;
    }
    if((buy/1000)==num32){
        ans+=4000;
    }
    if((buy%1000)==num33){
        ans+=4000;
    }
    if((buy%1000)==num34){
        ans+=4000;
    }
    if(buy==(num1+1)){
        ans+=100000;
    }
    if(buy==(num1-1)){
        ans+=100000;
    }
    if(num1==000000){
        int num11;
        num11=999999;
        if(buy==num11){
            ans+=100000;
        }
    }
    if(num1==999999){
        int num12;
        num12=0;
        if(buy==num12){
            ans+=100000;
        }
    }
    printf("%d", ans);
    return 0;
}