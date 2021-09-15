#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char t1[201],t2[201];
    scanf("%[^\n]s",&t1);
    scanf(" %[^\n]s",&t2);

    if (strlen(t1) == strlen(t2))
        printf("\\7");
    else{
        if(strlen(t1) > strlen(t2)){
            printf("%s",t1);
        }
            
        else{
            printf("%s",t2);
        }
            
    }
    return 0;
}