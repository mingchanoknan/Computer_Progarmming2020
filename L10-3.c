#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char c,msg[151];
    int count=0;
    scanf("%c\n%[^\n]s",&c,&msg);
    for (int i =0 ;i<strlen(msg);i++){
        if (tolower(msg[i]) == tolower(c))
            count++;
    }
    printf("%d",count);
    return 0;
}