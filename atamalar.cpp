// ConsoleApplication34.cpp: Konsol uygulamasının giriş noktasını tanımlar.
//

#include "stdafx.h"
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Turkish");
	int a = 5;
	int b = 4;

	//NORMAL ATAMA
	a = b;
	cout << a << "\n";

	//EKLEYEREK ATAMA
	a += 5;//a = a + 5;
	cout << a << "\n";

	//EKSİLTEREK ATAMA
	a -= 2;//a = a - 2;
	cout << a << "\n";

	//ÇARPARAK ATAMA
	a *= 4;// a = a * 4;
	cout << a << "\n";

	// BÖLEREK ATAMA
	a /= 2; //a = a / 2;
	cout << a << "\n";

	// BİR ARTIRARAK
	a++;
	cout << a << "\n";

	// BİRER AZALTARAK
	a--;
	cout << a << "\n";



	system("pause");
	return 0;
}
