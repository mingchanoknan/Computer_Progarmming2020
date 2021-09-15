#include <stdio.h>
#include <stdbool.h>

int main(){
    double A[3][3];
    double B[3][3];
    double ans[3][3];
    int i,j,k;
    scanf("%lf %lf %lf",&A[0][0],&A[0][1],&A[0][2]);
    scanf("%lf %lf %lf",&A[1][0],&A[1][1],&A[1][2]);
    scanf("%lf %lf %lf",&A[2][0],&A[2][1],&A[2][2]);
    scanf("%lf %lf %lf",&B[0][0],&B[0][1],&B[0][2]);
    scanf("%lf %lf %lf",&B[1][0],&B[1][1],&B[1][2]);
    scanf("%lf %lf %lf",&B[2][0],&B[2][1],&B[2][2]);

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            for (k=0;k<3;k++){
                ans[i][j] += A[i][k]*B[k][j];
            }

        
        
        }

    }

    
    printf("A x B\n");
    printf("%.2f %.2f %.2f\n",ans[0][0],ans[0][1],ans[0][2]);
    printf("%.2f %.2f %.2f\n",ans[1][0],ans[1][1],ans[1][2]);
    printf("%.2f %.2f %.2f\n",ans[2][0],ans[2][1],ans[2][2]);


    return 0;
}



	