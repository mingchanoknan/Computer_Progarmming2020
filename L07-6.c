#include <stdio.h>
#include <math.h>
double Pythagoras(int x, int y){
    double c;
    c =hypot(x,y);
    return c;
}
int main(){
    int x, y;
    scanf("%d %d",&x,&y);
    printf("sqrt(%d^2+%d^2)=%.2f",x,y,Pythagoras(x,y));
    return 0;
}