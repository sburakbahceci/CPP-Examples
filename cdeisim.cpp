// ConsoleApplication78.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	int d, e, n, i, z;
	char islemSec;
	printf("Harf Giriniz");
	printf("d yazdırmak için d\n");
	printf("e yazdırmak için e\n");
	printf("n yazdırmak için n\n");
	printf("i yazdırmak için i\n");
	printf("z yazdırmak için z\n");
	printf("İŞLEM SEÇİNİZ:");
	islem:
	scanf_s("%c", &islemSec);
	
	switch (islemSec) {
	case 'd':printf("DDDDDDDD\n");
		     printf("DD    DD\n");
		     printf("DD    DD\n");
		     printf("DD    DD\n");
		     printf("DDDDDDDD\n"); 
			 break;
	case 'e':printf("EEEEEEEE\n");
		     printf("EE\n");
		     printf("EEEEE\n");
		     printf("EE\n");
		     printf("EEEEEEEE\n");
			 break;
	case 'n':printf("NNNN      NN\n");
		     printf("NN  NN    NN\n");
		     printf("NN    NN  NN\n");
		     printf("NN      NNNN\n");
		     printf("NN        NN\n");
			 break;
	case 'i':printf("İİ\n");
		     printf("  \n");
			 printf("İİ\n");
			 printf("İİ\n");
			 printf("İİ\n");
			 printf("İİ\n");
			 break;
	case 'z':printf("ZZZZZZZZ\n");
		     printf("     ZZ     \n");
			 printf("    ZZ   \n");
			 printf("   ZZ   \n");
			 printf("ZZZZZZZZ\n");
		     break;
	}
	goto islem;
	system("pause");
	return 0;
}

