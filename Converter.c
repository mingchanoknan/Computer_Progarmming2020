#include <stdio.h>
int main(){
    char input;
    scanf("%c",&input);

    if ((input>='A' && input<='Z') || (input >= 'a' && input<='z')){
        if (input>='A' && input<='Z')
            printf("%c",input+32);
        else
            printf("%c",input-32);

        
    }
    else
        printf("error");
    return 0;
}