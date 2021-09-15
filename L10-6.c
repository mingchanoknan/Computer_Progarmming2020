#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char msg[101];
    int same =1,del=0;
    scanf("%[^\n]s", &msg);
    while (same)
    {
        /* code */
    }
    
    for (int i =0 ; i<strlen(msg); i++){
        if (msg[i] == msg[i+1]){
            for(int j = i ; j<strlen(msg); j++){
                msg[j] = msg[j+2];
                del++;
               
            }
            break;
        }

    }
    
    printf("%s",msg);

    return 0;
}
