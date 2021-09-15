#include <stdio.h>
#include <stdbool.h>

int main(){
    int m[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int n[] = {1, 3, 9, 7, 11, 15, 19};
    int num,i;
    bool ans = true;
    scanf("%d",&num);
    while (num>20 || num<1){
        scanf("%d",&num);
    }
    
    
    for (i=0;i<8;i++){
        if (num == m[i]){
            printf("%d is in M at index [%d]",num,i);
            ans=false;}
    }
    for (i=0;i<7;i++){
        if (num == n[i]){
            printf("%d is in N at index [%d]",num,i);
            ans=false;}
    
    }
    //printf("%d",ans);
    if (ans)
        printf("%d is not in neither M nor N",num);

    return 0;
}

  	