// ConsoleApplication14.cpp : Konsol uygulamas� i�in giri� noktas�n� tan�mlar.
//


#include <stdio.h>


int main(int argc, const char * argv[])
{
	unsigned int istedigimizsayi = 0;
	
	printf("Say� girin:"); scanf_s
	("%d", &istedigimizsayi);
	unsigned int x = 0;
	unsigned int y = 1;
	
	printf("%d %d", x, y);


	for (unsigned int i = 0; i < 10; i++)
	{
		unsigned int z = x + y;
		printf("%u ", z);
		x = y;
		y = z;
	}
	getchar();
	getchar();
	return 0;

}

