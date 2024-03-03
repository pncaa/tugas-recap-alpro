#include <stdio.h>

int main(){
    int x,jml;
    int nilai[20];

    printf("Jumlah Elemen : ");
    scanf("%d", &x);
    for(int i=0;i<x;i++){
        scanf("%d",&nilai[i]);
        jml +=nilai[i];
    }
    printf("Jumlah : %d",jml);

    return 0;
}