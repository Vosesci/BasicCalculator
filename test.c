#include <stdio.h>

int main()
{
    char islem;
    double sayi1, sayi2, sonuc;

    printf("Basit Hesap Makinesi\n");
    printf("Yapmak istediğiniz islemi seciniz(+,-,*-/):\n");
    scanf("%c", &islem);

    printf("iki sayi giriniz:");
    scanf("%lf %lf", &sayi1, &sayi2);

    switch (islem)
    {
    case '+':
        printf("%.2lf %.2lf = %.2lf\n", sayi1, sayi2, sayi1 + sayi2);
        break;
    case '-':
        printf("%.2lf %.2lf = %.2lf\n", sayi1, sayi2, sayi1 - sayi2);
        break;
    case '*':
        printf("%.2lf %.2lf = %.2lf\n", sayi1, sayi2, sayi1 * sayi2);
        break;
    case '/':
        if (sayi2 != 0)
        {
            printf("%.2lf %.2lf = %.2lf\n", sayi1, sayi2, sayi1 / sayi2);
        }
        else
        {
            printf("Herhangi bir sayi sifira bolunemez");
        }

        break;
    default:
        printf("Yanlis islem sectiniz!!");
        break;
    }
    return 0;
}
