#include <stdio.h>
int Fibonacci(int n){
    int f0 =0;
    int f1 =1;
    int ans,i;
    ans = f0+f1;
    for (i=1;i<n;i++){
        f0 = f1;
        f1 = ans;
        ans = f0+f1;
    }
    return ans;
}
int main(){
    int num;
    scanf("%d",&num);
    printf("method = %d",Fibonacci(num));
    return 0;
}