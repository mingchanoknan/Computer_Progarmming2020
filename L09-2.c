#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    struct student_info
    {
        char name[61];
        char sername[61];
        char sex[7];
        int age;
        char id[13];
        float gpa;
    } std[20],temp;
    for (int i = 0; i < 20; i++)
    {
        scanf("%s %s %s %d %s %f",&std[i].name,&std[i].sername,&std[i].sex,&std[i].age,&std[i].id,&std[i].gpa);
    }
    char sort_by[11];
    scanf("%s",&sort_by);
    if (tolower(sort_by[0]) == 'n'){
        for (int i = 0;i<19;i++){
            for (int j =i+1; j<20;j++){
                if (strcmp(std[i].name,std[j].name)>0){
                    temp = std[i];
                    std[i] = std[j];
                    std[j] = temp;
                }
            }
        }
    }
    else
    {
        if (tolower(sort_by[0]) == 's'){
            for (int i = 0;i<19;i++){
                for (int j =i+1; j<20;j++){
                    if (strcmp(std[i].sername,std[j].sername)>0){
                        temp = std[i];
                        std[i] = std[j];
                        std[j] = temp;
                    }
                }
            }
        }
        else
        {
            for (int i = 0;i<19;i++){
                for (int j =i+1; j<20;j++){
                    if (strcmp(std[i].id,std[j].id)>0){
                        temp = std[i];
                        std[i] = std[j];
                        std[j] = temp;
                    }
                }
            }
        }
        
    }
    
   for (int i = 0; i < 20; i++)
   {
       if (strcmp("Male",std[i].sex)==0){
        printf("Mr ");
    }
    else{
        printf("Miss ");
    }
    printf("%c %s (%d) ID: %s GPA %.2f\n",std[i].name[0],std[i].sername,std[i].age,std[i].id,std[i].gpa);
   }
   
    return 0;
}