#include <iostream>
using namespace std;

int main()
{
	// Pi sabiti k�s�ratl? olaca?? i�in de?i?ken olarak double tan?mlamam?z gerekiyor
	double Alan, r;

	// Kullan?c?dan yar?�ap de?erini alal?m
	cout << "Yar?�ap de?erini giriniz:";
	cin >> r;

	// Alan? hesaplay?p ekrana yazal?m
	Alan = 3.14 * r * r;
	cout << "Alan De?eri:" << Alan;

	return 0;
}