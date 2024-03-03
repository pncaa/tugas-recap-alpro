#include <stdio.h>

void keliling(int x){
    int hasil = x*4;
    printf("%d",hasil);
}
void luas(int x){
    int hasil = x*x;
    printf("%d", hasil);
}
void volume(int x){
    int hasil = x*x*x;
    printf("%d", hasil);
}

int main(){

    int s;
    printf("Masukan Nilai Sisi :  ");
    scanf("%d",&s);
    printf("Hasil Keliling : ");
    keliling(s);
    printf("Hasil Luas : ");
    luas(s);
    printf("Hasil Volume : ");
    volume(s);

    return 0;
}