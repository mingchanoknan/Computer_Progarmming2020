#include <stdio.h>
#include <string.h>

int main(){
    struct student_info
    {
        char name[61];
        char sername[61];
        char sex[7];
        int age;
        char id[13];
        float gpa;
    } std;
    scanf("%s %s %s %d %s %f",&std.name,&std.sername,&std.sex,&std.age,&std.id,&std.gpa);
    if (strcmp("Male",std.sex)==0){
        printf("Mr ");
    }
    else{
        printf("Miss ");
    }
    printf("%c %s (%d) ID: %s GPA %.2f",std.name[0],std.sername,std.age,std.id,std.gpa);
    return 0;
}