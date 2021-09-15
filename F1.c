#include <stdio.h>
#include <string.h>
#include <math.h> 

void print(char str[50]){
    int A;
    A = lenght-2-strlen(str);
    if(A%2 == 0){
        for(int i=0; i< A/2 ; i++){
        printf(" ");}}
    else{
        for(int i=0; i< A/2+1 ; i++){
        printf(" ");}
    }
    printf("%s", str);
    for(int i=0; i< A/2 ; i++){
        printf(" ");}
    printf("*\n");

}

int main(){
    int lenght;
    char str1[50], str2[40];
    
    scanf("%d", &lenght);
    
    scanf("%[^\n]s", &str1);
    scanf(" %[^\n]s", &str2);
    for(int i=0; i<lenght ; i++){
        printf("*");
    }
    printf("\n");


}