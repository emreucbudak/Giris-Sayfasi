/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int kont;
    printf("Hosgeldiniz!");
    printf ("\n\nDaha önce kayit yaptiysaniz 1 e basin = ");
    scanf("%d",&kont);
    if (kont ==1)
    {
        char kadkont,sifkont;
        jump1:
        printf ("Kullanici Adi Giriniz = ");
        scanf ("%s",&kadkont);
        printf("Girdiğiniz Kullanici Adi = %c\n",kadkont);
        printf ("Sifre Giriniz = ");
        scanf("%s",&sifkont);
        if (kadkont == 'e' && sifkont == 'e')
        {
            printf("Başarıyla Oturum Açtınız!");
        }
        else
        {
            printf ("Yanlis Girdiniz Tekrar Deneyin");
            goto jump1;
        }
    }
    return 0;
}
