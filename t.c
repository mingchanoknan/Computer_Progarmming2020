#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char msg[450];
    int line=0,word=0,cha=0;
    for (int i =0 ; i<450 ;i++){
      scanf(" %[^\n]s",&msg);
      if (msg[0] == '.')
        break;
      else{
        line++;
          for (int i=0; i<strlen(msg);i++){
              if (!isspace(msg[i]))
                  cha++;
              else{
                  word++;
            }
        }
        word++;
    }
  }    
    printf("Char = %d, word = %d, line = %d",cha,word,line);
    return 0;
}
