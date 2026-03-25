#include <stdio.h>

int conta_pares(int n, int mat[][n]) {
    int res=0;

    for (int i=0; i < n; i++) {
        for (int j=0; j < i+1; j++) {
            if (mat[i][j] % 2 == 0) res++;
        }
    }
    return res;
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(n, mat));
    return 0;
}
