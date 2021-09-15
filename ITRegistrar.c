#include <stdio.h>
int main(){
    char f_name[31], l_name[31],num_id[9];
    int dd, mm, yy;
    float gpa;
    scanf("%s", f_name);
    scanf("%s",l_name);
    scanf("%s", num_id);
    scanf("%d/%d/%d",&dd,&mm,&yy);
    scanf("%f",&gpa);




    printf("Fullname: %s %s\n", f_name,l_name);
    printf("ID: %s\n",num_id);
    printf("DOB: %02d-%02d-%d\n",dd,mm,yy);
    printf("GPA: %.2f\n",gpa);
    return 0;
}