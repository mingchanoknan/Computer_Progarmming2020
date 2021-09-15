#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char msg[301];
    char m;
    int count=0, position[301]={0};
    scanf("%[^\n]s",msg);
    scanf(" %c",&m);
    
    for (int i = 0; i<strlen(msg);i++){
        if (tolower(m) == tolower(msg[i])){
            position[count] = i;
            count++;}
    }
    //printf("%d",count);
    if (count){
        printf("There is/are %d \"%c\" in the above sentences.\n",count,m);
        printf("Position: %d",position[0]+1);
        for (int i = 1; i<count;i++){
            printf(", %d",position[i]+1);
        }
    }
    else{
        printf("Not found.");
    }
        
    return 0;
    
}