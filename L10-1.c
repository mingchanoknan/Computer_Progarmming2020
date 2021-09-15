#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char msg[151];
    scanf("%[^\n]s",&msg);
    for (int i =0 ; i< strlen(msg);i++){
        if (!isspace(msg[i]))
            printf("%c",msg[i]);
    }
    return 0;
}