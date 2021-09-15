#include <stdio.h>
#include <string.h>

int main(){
    struct t
    {
        int num;
        char temp[201];
    } maxx;
    maxx.num =0;
    char w1[201],w2[201],w[200];
    int count=0 ,check=0;

    scanf("%[^\n]s",&w1);
    scanf(" %[^\n]s",&w2);
    for (int i =0 ; i<strlen(w1);i++){
        if (w1[i] == w2[i]){
            check++;
            w[count] = w1[i];
            count = 1;
        }
        else if (check == 1)
        {
            break;
        }
    }
    if(check ==0)
        printf("not found");
    else
        printf("%d\n%s",count,w);
    return 0;
}