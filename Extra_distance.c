#include <stdio.h>
#include <math.h>

int main(){
    int num,x,y;
    scanf("%d",&num);
    struct distance
    {
        int dx;
        int dy;
        char position;
        int dist;
    }pos[num],temp;
    scanf("%d %d",&x,&y);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d",&pos[i].dx,&pos[i].dy);
        pos[i].position=97+i;
        pos[i].dist=hypot((x-pos[i].dx),(y-pos[i].dy));
    }

    for (int i = 0; i < num-1; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if(pos[i].dist > pos[j].dist){
                temp=pos[i];
                pos[i]=pos[j];
                pos[j]=temp;
            }
        }
    }
    for(int i = 0;i<num;i++){
        printf("%c ",pos[i].position);
    }
    return 0;
}
