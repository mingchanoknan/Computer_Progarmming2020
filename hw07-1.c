#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h> 

char convert(char msg);
void compare(char msg1[], char msg2[]);

int main(){
    char msg1[102],msg2[102];
    scanf("%[^\n]s",msg1);
    scanf(" %[^\n]s",msg2);
    for (int i=0;i<strlen(msg1);i++){
        msg1[i] = convert(msg1[i]);
    }
    for (int i=0;i<strlen(msg2);i++){
        msg2[i] = convert(msg2[i]);
    }
    printf("*** Results ***\n");
    printf("%s\n",msg1);
    printf("%s\n",msg2);
    printf("***************\n");
    compare(msg1,msg2);
    return 0;


}
char convert(char msg){
    if (islower(msg))
        msg = toupper(msg);
    else{
        if(isupper(msg))
            msg= tolower(msg);
        else
            msg == msg;
    }
    return msg;
}
void compare(char msg1[], char msg2[]){
    int check =0,max,i;
    max = fmax (strlen(msg1), strlen(msg2));
    for (i =0; i<max;i++){
        if (tolower(msg1[i]) == tolower(msg2[i]))
            check++;
    }
    if (check == max)
        printf("Both strings are the same.");
    else
        printf("Both strings are not the same.");

}