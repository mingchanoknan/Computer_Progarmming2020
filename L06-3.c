#include <stdio.h>
#include <stdbool.h>

int main(){
    double A[3][3];
    double check;
    int i=0;
    scanf("%lf %lf %lf",&A[0][0],&A[0][1],&A[0][2]);
    scanf("%lf %lf %lf",&A[1][0],&A[1][1],&A[1][2]);
    scanf("%lf %lf %lf",&A[2][0],&A[2][1],&A[2][2]);
    if(A[0][0] != A[1][1] || A[1][1] != A[2][2])
        i++;
    if (A[0][1] != 0 && A[0][2] != 0 &&A[1][0] != 0 &&A[1][2] != 0 &&A[2][0] != 0 &&A[2][1] != 0)
        i++;
    
    if (i>0)
    {
        printf("This is not a scalar matrix");
    }
    else{
        printf("This is a scalar matrix");
    }

    return 0;
}



	