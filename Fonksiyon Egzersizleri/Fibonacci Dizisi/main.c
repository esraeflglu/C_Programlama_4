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
    /*Her say�n�n kendinden �nceki say� ile toplanmas� sonucu olu�an say� dizisine Fibonacci dizisi ad� verilmektedir.
    Buna g�re klavyeden ka� adet fibonacci say�s� �retilece�i bilgisi girilerek say�lar�n �retilmesini sa�layan C
    program�n� fonksiyon kullanarak yaz�n�z*/
    int sayi;
    printf("Kac adet fibonacci sayisi uretilecek\n");
    scanf("%d",&sayi);
    fibonacci(sayi);

    return 0;
}

