#include <stdio.h>

int main()
{
    float rk, rj, rw;
    int v, s, t;

    printf("Masukan Nilai\n");
    scanf("%d""%d",&s,&t);
    rk= (float)s/t;
    scanf("%d""%d",&v,&t);
    rj= (float)v*t;
    scanf("%d""%d",&s,&v);
    rw= (float)s/v;

    printf("\nHasil Penjumlahan\n");
    printf("%.2f\n",rk);
    printf("%.2f\n",rj);
    printf("%.2f\n",rw);

    return 0;
}
