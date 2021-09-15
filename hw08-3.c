#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int num, *p;
    scanf("%d", &num);
    p = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &*(p + i));
    }
    int delete;
    scanf("%d", &delete);
    for (int i =delete; i < num; i++)
    {
        *(p + i) = *(p + i+1);
    }
    for (int i = 0; i < num - 1;i++){
        printf("%d ", *(p + i));
    }
 
    return 0;
}