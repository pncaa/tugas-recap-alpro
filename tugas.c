#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int bilanganAcak(int min, int max)
{
    return rand() % (max - min + 1) + min;
}


int periksaTebakan(int bilangan, int tebakan)
{
    if (tebakan == bilangan)
    {
        printf("Selamat! Kamu menebak bilangan yang benar.\n");
        return 1;
    }
    else if (tebakan < bilangan)
    {
        printf("Terlalu rendah! Coba lagi.\n");
    }
    else
    {
        printf("Terlalu tinggi! Coba lagi.\n");
    }
    return 0; 
}

int main()
{
    int bilanganMin = 1;
    int bilanganMax = 100;
    int bilanganTarget;
    int tebakan; 
    int percobaan = 0;
    char mainLagi;

    srand(time(NULL));

    printf("Selamat datang praktikan tercinta di Permainan Tebak Bilangan!\n");
    printf("Aku udah milih sebuah bilangan antara %d dan %d. Kira kira kamu bisa ga yaaaa nebaknya?\n", bilanganMin, bilanganMax);


    bilanganTarget = bilanganAcak(bilanganMin, bilanganMax);

    do
    {
        printf("Masukan tebakanmu: ");
        scanf("%d", &tebakan);
        percobaan++;

      
        if (periksaTebakan(bilanganTarget, tebakan))
        {
            printf("Kamu melakukan %d percobaan.\n", percobaan);
            printf("Apakah kamu ingin bermain lagi? (Y/T): ");
            scanf(" %c", &mainLagi); 
            if (mainLagi == 'Y' || mainLagi == 'y')
            {
              
                bilanganTarget = bilanganAcak(bilanganMin, bilanganMax);
                percobaan = 0; 
                printf("\nSaya telah memilih bilangan baru. Ayo bermain lagi!\n");
            }
            else
            {
                printf("Terima kasih telah bermain. Selamat tinggal!\n");
                break; 
            }
        }
    } while (1); 

    return 0;
}
