// ConsoleApplication29.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	float oSayi = 10.546;
	printf("%.2f", oSayi);



	system("pause");
	return 0;
}

