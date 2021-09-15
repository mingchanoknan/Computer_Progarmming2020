#include <stdio.h>
int main(){
    char fname1[31], sname1[31], person2[61], person3[61];
    scanf("%s", fname1);
    scanf("%s",sname1);
    scanf(" %[^\n]s" ,person2);
    scanf(" %[^\n]s ", person3);



    printf("Person 1: %s %s\n",fname1,sname1);
    printf("Person 2: %s\n",person2);
    printf("Person 3: %s\n",person3);
    return 0;

}