#include <stdio.h>
#include <string.h>
#include <ctype.h>
char msg[450];

void getinput(void){
    scanf("%[^\n]s ",&msg);
}

int main(){
    for (int i=0; i<10 ;i++){
        getinput();
        printf("%s %d\n",msg,i);
    }
    return 0;
    
}
