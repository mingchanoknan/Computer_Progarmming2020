#include <stdio.h>
#include <string.h>
 
struct std_inf{
        char name[60];
        char lname[60];
        int midterm;
        int final;
        int assignment;
        int total;
    };
int CheckScore(struct std_inf student);
int CalScore(struct std_inf student);
void PrintScore(struct std_inf student[], int check);
int main(){
    int check=0;
    struct std_inf student[10];
    for (int i=0; i<10 ;i++){
        scanf("%s", student[i].name);
        if (strcmp(student[i].name, "END")==0)
            break;
        scanf("%s %d %d %d", &student[i].lname, &student[i].midterm, &student[i].final, &student[i].assignment);
        student[i].total = CalScore(student[i]);
        if (CheckScore(student[i]) == 0)
            printf("Error\n");
        check+=1;}
    PrintScore(student, check);
    return 0;
}
 
int CheckScore(struct std_inf student){
    if (((student.total > 100 || student.total < 0 || student.midterm > 100 || student.midterm < 0) || (student.final > 100 || student.final < 0) || (student.assignment > 100 || student.assignment < 0)))
        return 0;
    else
        return 1;
}
 
int CalScore(struct std_inf student){
    return student.final+student.midterm+student.assignment;
}
 
void PrintScore(struct std_inf student[], int check){
    printf("1234567890123456789012345678901234567890\n");
    printf("M    F    A    TT\n");
    for (int i=0; i < check; i++){
        if((student[i].total <= 100 && student[i].total >= 0) && (student[i].midterm <= 100 && student[i].midterm >= 0) && (student[i].final <= 100 && student[i].final >= 0) && (student[i].assignment <= 100 && student[i].assignment >= 0))
        printf("%c %s        %d   %d   %d   %d\n", student[i].name[0], student[i].lname, student[i].midterm, student[i].final, student[i].assignment, student[i].total);}
}