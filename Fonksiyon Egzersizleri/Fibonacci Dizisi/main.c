#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n)
{
    int ilk=0;
    int ikinci=1;
    int sonraki;
    int i;

    printf("Uretilecek fibonacci sayilari:\n");

    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            sonraki=i;
        }
        else
        {
            sonraki=ilk+ikinci;
        ilk=ikinci;
        ikinci=sonraki;

        }
        printf("%d\n",sonraki);
    }

}

int main()
{
    /*Her sayýnýn kendinden önceki sayý ile toplanmasý sonucu oluþan sayý dizisine Fibonacci dizisi adý verilmektedir.
    Buna göre klavyeden kaç adet fibonacci sayýsý üretileceði bilgisi girilerek sayýlarýn üretilmesini saðlayan C
    programýný fonksiyon kullanarak yazýnýz*/
    int sayi;
    printf("Kac adet fibonacci sayisi uretilecek\n");
    scanf("%d",&sayi);
    fibonacci(sayi);

    return 0;
}

