// ConsoleApplication104.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct kisi
{
	char ad[20];
	char soyad[50];
	char tcKimlik[12];
	int yas;
}Kisi;

Kisi dizi[100];
int sayac = 0;

void ekle(){
	printf("Ad Giriniz:"); scanf_s("%s", dizi[sayac].ad);
	printf("Soyad Giriniz:"); scanf_s("%s", dizi[sayac].soyad);
	printf("T.C No Giriniz: "); scanf_s("%s", dizi[sayac].tcKimlik);
	printf("Yas Giriniz:"); scanf_s("%d",& dizi[sayac].yas);
	sayac++;

}
void tcAra()
{
	char aranan[12];
	printf("T.C No: "); scanf_s("%s", aranan);
	for (int i = 0; i < sayac; i++)
	{
		if (!strcmp(dizi[i].tcKimlik , aranan))
			printf("%s-%s-%s-%d\n", dizi[i].tcKimlik, dizi[i].ad, dizi[i].soyad, dizi[i].yas);
	}

}
void soyadAra(){
	char aranan[50];
	printf("Soyad : "); scanf_s("%s", aranan);
	for (int i = 0; i < sayac; i++)
	{
		if (!strcmp(dizi[i].soyad, aranan))
			printf("%s-%s-%s-%d\n", dizi[i].tcKimlik, dizi[i].ad, dizi[i].soyad, dizi[i].yas);
	}


}
void sil(){
	char aranan[12];
	printf("Silinecek T.C No: "); scanf_s("%s", aranan);
	int i = 0;
	for (i = 0; i < sayac; i++)
	
		if(!strcmp(dizi[i].tcKimlik, aranan))
			
		break;
		for (int j = 1; j < sayac; j++)
			dizi[j] = dizi[j + 1];
		sayac--;
	



}
void guncelle(){

/*kendin yaz geri dönsün
*/}
void listele(){
	for (int i = 0; i < sayac; i++)
		printf("%s-%s-%s-%d\n", dizi[i].tcKimlik, dizi[i].ad, dizi[i].soyad, dizi[i].yas);
	printf("------------------------------");
}
void menu()
{
	int secim = 0;
	do
	{
		listele();
		printf("1. Ekle\n");
		printf("2. T.C Kimlik No İle Ara\n");
		printf("3. Soyad İle Ara\n");
		printf("4. Sil\n");
		printf("5. Guncelle\n");
		printf("6. Cikis\n");

		printf("Secim:"); scanf_s("%d", &secim);
		if (secim == 1)ekle();
		else if (secim == 2)tcAra();
		else if (secim == 3)soyadAra();
		else if (secim == 4)sil();
		else if (secim == 5)guncelle();
	} while (secim!=6);
	/*1- Ekle  -> ekle();
	2-  Tc No ile  -> tcAra();
	3- Soyad İle -> soyadAra();
	4- sil
	5- güncelle
	6- çıkış
	*/



}
int main(int argc, const char * argv)
{
	
	menu();




	system("pause");
    return 0;
}

