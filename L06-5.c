#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char msg[300];
    char check;
    int position[300];
    int count =0,n=0;
    scanf("%[^\n]s",msg);

    scanf(" %c",&check);

    //printf("%s %d, %c",msg,strlen(msg),check);

    for(int i =0;i<strlen(msg);i++)
    {
        if (toupper(msg[i]) == toupper(check))
        {
            count++;
            position[n] = i+1;
            n++;
        }
    }
    if (count>0){
        printf("There is/are %d \"%c\" in the above sentences.\n",count,check);
        printf("Position: %d",position[0]);
        for (int j=1; j<count;j++){
            printf(", %d",position[j]);
        }
    }
    else
        printf("Not found.");
    return 0;
    
    }