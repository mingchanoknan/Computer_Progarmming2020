#include <stdio.h>
#include <math.h>
#define PI  3.141592653589793
#define G  9.81

double degree_to_radius(int degree){
    double radius;
    radius = degree*PI/180;
    return radius;
}

double sinpow2(double radius){
    double ans;
    ans = sin(radius);
    return pow(ans,2);
}
double find_h(int u, double sinpow2){
    double h = (pow(u,2)*sinpow2)/(2*G);
    return h;

}
int main(){
    int degree,u;
    double radius,sin_pow2,h;
    scanf("%d",&degree);
    scanf("%d",&u);
    radius = degree_to_radius(degree);
    sin_pow2 = sinpow2(radius);
    h = find_h(u,sin_pow2);
    printf("theta (degree) : %d\nu (m/s) : %d\nh (m) : %.4f",degree,u,h);
    return 0;


}