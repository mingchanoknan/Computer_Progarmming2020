#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
   char msg[101],remsg[101];
   int n=0,check=0;
   scanf("%[^\n]s",msg);
   for (int i =strlen(msg)-1;i>=0;i--){
        remsg[n] =msg[i];
        n++;}
    //printf("%s",remsg);

    for (int j =0 ; j<strlen(msg);j++){
        if (msg[j] == remsg[j])
            check++;
    }



    if (check == strlen(remsg))
        printf("It is Palindrome.");
    else
        printf("It is not Palindrome.");
    
    return 0;
}



	