#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char msg[201];
    char A[] ={'A','B','X','Y','P','Q','R','M','N','C','E','D','K','L','J','O','S','H','T','U','F','V','Z','G','W','I','A','B','X','Y','P',};
    scanf("%[^\n]s",msg);
    for (int i = 0; i < strlen(msg); i++)
    {
        if (isupper(msg[i])){
            for(int j=0;j<strlen(A)-5; j++){
                if (msg[i] == A[j])
                    printf("%c",A[j+5]);
            }
        }
        else
        {
            if (islower(msg[i])){
                for(int j=0;j<strlen(A)-5; j++){
                    if (msg[i] == tolower(A[j]))
                        printf("%c",tolower(A[j+5]));
                }
            }
            else
                printf("%c",msg[i]);
        }
        
        
    
        
    }
    
    return 0;
}