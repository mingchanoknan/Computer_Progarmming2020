#include <stdio.h>
int main(){
    float grade;
    scanf("%f",&grade);
    if (grade <= 100 && grade >= 0){
        if (grade >=80)
            printf("A");
        else if (80>grade && grade>=70)
            printf("B");
        else if (70>grade && grade>=60)
            printf("C");
        else if (60>grade && grade>=50)
            printf("D");
        else if (50>grade)
            printf("F");
    }
    else
        printf("Out of Range");
    return 0;
}

