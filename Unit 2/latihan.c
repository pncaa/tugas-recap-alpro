#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Masukan jumlah transaksi hari ini :  ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("KAMU HARI INI HEMAT SEKALI!!!!");
    }
    else
    {
        printf("BOROS BANGET HARI INI!!!!\n");
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &b);
            c += b;
        }
        printf("MASA NGELUARIN DUIT SEGINI %d", c);

        return 0;
    }
}