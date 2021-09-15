#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int firstupper(char str[], int n) {
   int i;
   for(i = 0; i<n; i++) {
      if ((i == 0 && str[i] != ' ' )|| (str[i] != ' ' && str[i-1] == ' ')) {
         if(str[i] >= 'a' && str[i]<='z') {
            str[i] = (char)(('A'-'a') + str[i] );
         }
      } else if (str[i] >= 'A' && str[i] <= 'Z') {
         str[i] = (char)(str[i] + ('a' - 'A'));
      }
   }
   return 0;
}
int main(void) {
    char *arrOfStr[20];
    char *arrOfStrCpy[20];
    int lenWord;
    for(int index=0;index<20;index++){
        char input[256];
        arrOfStr[index]=malloc(10*sizeof(char));
        scanf("%[^\n]%*c", input);
        lenWord = sizeof(input) / sizeof(input[0]);
        firstupper(input, lenWord);
        strcpy(arrOfStr[index],input);
    }
    for (int i = 0; i < 20; i++) {
      for (int j = i+1; j < 20; j++)
         if (strcmp(arrOfStr[i], arrOfStr[j]) > 0) {
            char* temp = arrOfStr[i];
            arrOfStr[i] = arrOfStr[j];
            arrOfStr[j] = temp;
         }
        arrOfStrCpy[i] = arrOfStr[i];
    }
    for(int k = 0; k < 20; k++)
      printf("%s\n", arrOfStrCpy[k]);
   return 0;
}
