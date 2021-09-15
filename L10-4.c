#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char msg[151];
    char text[] ="";
    int count=0,sum=0;
    struct words
    {
        char word[151];
        int num;
    }w[150];
    

    scanf("%[^\n]s",&msg);
    for (int i =0; i<strlen(msg);i++){
        if (isspace(msg[i])){
            sum++;}
    }
    printf("%d words\n----\n",sum+1);
    for (int i =0; i<strlen(msg);i++){
        count++;
        printf("%c",tolower(msg[i]));
        if (isspace(msg[i])){
            count--;
            printf(": %d\n",count);
            count=0;
        }
    }
    printf(" : %d\n",count);
}