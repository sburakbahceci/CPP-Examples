// ConsoleApplication27.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Turkish");
	int psayi;//Printf için girilecek sayi
	int csayi;//cout işlemi için girilecek sayi
	printf("Birinci sayiyi girin : \n "); scanf_s("%d", &psayi);
	printf("girilen sayi : %d \n", psayi + 1);
	cout << "İkinci sayiyi gir";
	cin >> csayi;
	cout << "Girilen ikinci sayi değeri " << csayi + 2;

	





	system("pause");
	return 0;
}

