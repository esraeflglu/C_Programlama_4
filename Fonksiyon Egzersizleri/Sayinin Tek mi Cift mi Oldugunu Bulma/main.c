#include <stdio.h>
#include <stdlib.h>

    int tekcift(int n)
    {
        return n%2;
    }


int main()
{
   /* Klavyeden girilen pozitif bir tamsay�n�n tek ya da �ift oldu�unu
    fonksiyon kullanarak bulan C program�n� yaz�n�z*/
    int sayi;
    int sonuc;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    sonuc=tekcift(sayi);
    if(sonuc==1)
    {
        printf("Sayimiz tektir");

    }
    else
    {
        printf("Sayimiz cifttir");
    }
    return 0;
}
