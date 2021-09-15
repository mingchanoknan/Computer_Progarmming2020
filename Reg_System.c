#include <stdio.h>
int main(){
    long int i,age,height,weight,s_age=0;
    float s_height=0,s_weight=0;
    int a1=0, a2=0,a3=0,a4=0;
    for (i=1;i<=50;i++){
        scanf("%ld %ld %ld",&age,&height,&weight);
        s_age += age;
        s_height += height;
        s_weight += weight;
        if (age>=20 && height>=160)
            a1++;
        if (age>=30 && weight>=40 && weight<=80)
            a3++;
        if ((age<40&&weight<85) || (age<40 && height<=200))
            a4++;
        if((age<20&&height<=180)||(age<20&&weight>=60))
            a2++;
    }
    printf("Age >= 20 and Height >= 160: %d\n",a1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n",a2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n",a3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n",a4);
    printf("Average Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f",s_age/50,s_height/50,s_weight/50);

    return 0;
}