#include <stdio.h>
int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    scanf("%d", &n);
    nextTerm = t1 + t2;

    for(int i=0; i<n; i++) {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("method = %d",(nextTerm));

    return 0;
}