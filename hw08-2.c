#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num, *p;
    scanf("%d", &num);
    p = (int *)malloc((num+1) * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &*(p + i));
    }
    int pos_insert,num_insert;
    scanf("%d", &pos_insert);
    scanf("%d",&num_insert);
    for (int i =num;i>pos_insert;i--){
        *(p+i) = *(p+i-1);
    }
    
    *(p+pos_insert) = num_insert;
    for (int i = 0; i < num+1;i++){
        printf("%d ", *(p + i));
    }
 
    return 0;
}
