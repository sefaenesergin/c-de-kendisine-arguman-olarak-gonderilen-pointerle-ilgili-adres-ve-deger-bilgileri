//SEFA ENES ERGİN-sefaenesergin@gmail.com
//  Fonksiyonumuz, kendisine arguman olarak gonderilen bir pointer'i alip; bu pointer'in bellekteki adresini, isaret ettigi degiskeni degerini ve bu degiskenin adresini gösterir
#include <stdio.h>
void pointer_detayi_goster(int *); //fonksiyonun imzası.

int main(void){
    int sayi=1;
    int *pointer;
    pointer=&sayi; //degisken isaret ediliyor.
    pointer_detayi_goster(pointer);
    return 0;
}
void pointer_detayi_goster(int *p){
    printf(" Pointer adresi  \t %p \n ",&p);
    printf("İşaret ettiği değişkenin adresi: \t  %p \n ",&p); /* adresi aradığımız için & kullanıyoruz.*/
    printf("İşaret ettiği değişkenin değeri: \t  %d \n ",*p); /* p'nin önüne yıldız  işareti getirdik. çünkü p'nin gösterdiği adresin değerini istiyoruz.*/
}
