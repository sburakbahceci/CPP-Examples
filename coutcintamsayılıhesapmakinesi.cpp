// ConsoleApplication30.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	int birinciSayi;
	int ikinciSayi;
	cout << "Birinci sayı";
	cin >> birinciSayi;
	cout << "İkinci sayı";
	cin >> ikinciSayi;
	cout << "Toplama : " << birinciSayi + ikinciSayi << "\n";
	cout << "Çıkarma : " << birinciSayi - ikinciSayi << "\n";
	cout << "Çarpma  : " << birinciSayi * ikinciSayi << "\n";
	cout << "Bölme   : " << birinciSayi / ikinciSayi << "\n";
	system("pause");
	return 0;
}

