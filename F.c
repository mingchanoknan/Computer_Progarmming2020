#include <stdio.h>
#include <string.h>
#include <math.h> 
int main(){
    int lenght, A;
    char str1[50], str2[40];
    
    scanf("%d", &lenght);
    
    scanf(" %[^\n]s", &str1);
    scanf(" %[^\n]s", &str2);
    for(int i=0; i<lenght ; i++){
        printf("*");
    }
    printf("\n");

    //2
    printf("*");
    A = lenght-2-strlen(str1);
    if(A%2 == 0){
        for(int i=0; i<(A)/2 ; i++){
        printf(" ");}}
    else{
        for(int i=0; i<(A/2)+1 ; i++){
        printf(" ");}
    }
    printf("%s", str1);
    for(int i=0; i<A/2 ; i++){
        printf(" ");}
    printf("*\n");
    
    //3 
    printf("*");
    A = lenght-2-strlen(str2);
    if(A%2 == 0){
        for(int i=0; i< A/2 ; i++){
        printf(" ");}}
    else{
        for(int i=0; i< A/2+1 ; i++){
        printf(" ");}
    }
    printf("%s", str2);
    for(int i=0; i< A/2 ; i++){
        printf(" ");}
    printf("*\n");

    //4
    for(int i=0; i<lenght ; i++){
        printf("*");
    }
   return 0;
}