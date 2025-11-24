#include <stdio.h>

int main() {
    int a[2][2], b[2][2], m[2][2];
    int i, j, k;

    // input matrix A
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    // input matrix B
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    // multiplication
    for(i=0;i<2;i++)
        for(j=0;j<2;j++) {
            m[i][j] = 0;
            for(k=0;k<2;k++)
                m[i][j] += a[i][k] * b[k][j];
        }

    // output
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
