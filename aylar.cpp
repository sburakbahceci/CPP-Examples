// ConsoleApplication73.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ay;
	printf("Ay degerini giriniz(1-12)= ");
	scanf_s("%d", &ay);  // Kullanıcıdan değer girmesi beklenir

	switch (ay) {
	case 1: printf("Girdiniginiz deger \"Ocak\" ayidir");  // Ekrana " yazdırmak için \" yazmak lazım!!!
		break;
	case 2: printf("Girdiniginiz deger \"Subat\" ayidir");
		break;
	case 3: printf("Girdiniginiz deger \"Mart\"  ayidir");
		break;
	case 4: printf("Girdiniginiz deger \"Nisan\" ayidir");
		break;
	case 5: printf("Girdiniginiz deger \"Mayis\" ayidir");
		break;
	case 6: printf("Girdiniginiz deger \"Haziran\" ayidir");
		break;
	case 7: printf("Girdiniginiz deger \"Temmuz\" ayidir");
		break;
	case 8: printf("Girdiniginiz deger \"Agustos\" ayidir");
		break;
	case 9: printf("Girdiniginiz deger \"Eylul\" ayidir");
		break;
	case 10: printf("Girdiniğini deger \"Ekim\" ayidir");
		break;
	case 11: printf("Girdiniğini deger \"Kasim\" ayidir");
		break;
	case 12: printf("Girdiniğini deger \"Aralik\" ayidir");
		break;
	default: printf("Hatali islem sectiniz!!!");  //1-12 aralığından farklı bir değer girerse ekrana default yazdırılır
		break;
	}

	printf("\n");
	system("pause");  // Kullanıcı herhangi bir tuşa basana kadar programı beklemeye alır
	return 0;
}