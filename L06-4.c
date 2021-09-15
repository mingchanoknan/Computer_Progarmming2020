#include <stdio.h>
#include <string.h>

int main(){
    char msg[100];
    scanf(" %[^\n]s",&msg);
    for (int i =strlen(msg)-1;i>=0;i--)
        printf("%c",msg[i]);


    return 0;
}



	