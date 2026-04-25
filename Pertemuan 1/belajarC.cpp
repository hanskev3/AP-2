#include <stdio.h> // header standar C
#include <conio.h>

int main () {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World !!\n"); // printf -> untuk fungsi output pada c

    printf("Masukkan Nama : ");
    gets(nama); // gets -> get string

    printf('Masukkan nim : ');
    scanf("%d", &nim); // integer -> %d

    getchar();

    printf("Masukkan kom : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip); // float -> %f

    /*ini untuk Output*/
    printf("Nama : ");
    puts(nama); // puts -> put string; untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("Kom : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("press any key to continue...");
    getch();
}
