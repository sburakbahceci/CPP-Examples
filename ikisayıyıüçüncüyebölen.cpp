// ConsoleApplication11.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"

int main()
{
	int a, b, c, d;
	float sonuc;
	
	printf("Birinci sayı");
	scanf_s("%d", &a);
	printf("İkinci sayi");
	scanf_s("%d", &b);
	printf("Üçüncü sayi");
	scanf_s("%d", &c);
	d = (a + b);
	sonuc = (d / c);
	printf("Sonuc %f", sonuc);

	getchar();
	getchar();

	return 0;


}
