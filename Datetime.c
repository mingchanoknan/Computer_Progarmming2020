#include <stdio.h>
int main(){
    int s, min, hour, date,before;
    scanf("%d",&s);
    before = s;
    date = (s/86400) - ((s%86400)/86400);
    s = before - date*86400;
    hour= (s/3600) - ((s%3600)/3600);
    s -= hour*3600;
    min = (s/60) -((s%60)/60);
    s -= min*60;
    printf("%d s = %d d %d h %d m %d s",before,date,hour,min,s);
    return 0;
}