// Main.cpp
// Лісничук Арсен
// Лабораторна робота № 4.1
// Цикли
// Варіант 13

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, N;
	double S;
	cout << "N = "; cin >> N;

	S = 1;
	k = N;
	while (k <= 25)
	{
		S *= sqrt(1 + (1.*N) / k);
		k++;
	}
	cout << S << endl;
	
	S = 1;
	k = N;
	do {
		S *= sqrt(1 + (1. * N) / k);
		k++;
	} while (k <= 25);
	cout << S << endl;
	
	S = 1;
	for (k = N; k <= 25; k++)
	{
		S *= sqrt(1 + (1. * N) / k);
	}
	cout << S << endl;
	
	S = 1;
	for (k = 25; k >= N; k--)
	{
		S *= sqrt(1 + (1. * N) / k);
	}
	cout << S << endl;

	return 0;
}
