// ConsoleApplication148.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//


#include "stdafx.h"
#include <stdlib.h>
#include <string.h>


int main()
{
	char sehir1[50];
	char sehir2[50];
	printf("Birinci şehri giriniz:\n");
	gets_s(sehir1);
	printf("İkinci şehri giriniz:\n");
	gets_s(sehir2);

	if (strcmp(sehir1, sehir2) >= 0) {
		printf("sehir1 sehir2 den büyüktür");
	}
	else
	{
		printf("sehir2 sehir1 dan büyüktür");
	}



	system("pause");
	return 0;
}
