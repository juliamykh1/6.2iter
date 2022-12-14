#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;


void Create(int mas[], const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int mas[], const int n)
{
	cout << "a[ ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "]" << endl;
}


int Max(int mas[], const int n)
{
	int max = mas[0];
	for (int i = 1; i < n; i++)
		if (mas[i] > max)
			max = mas[i];
	return max;
}

int Min(int mas[], const int n)
{
	int min = mas[0];
	for (int i = 1; i < n; i++)
		if (mas[i] < min)
			min = mas[i];
	return min;
}

int main()
{
	srand((unsigned)time(NULL));

	const int k = 10;
	int a[k];

	int Low = -5;
	int High = 5;

	Create(a, k, Low, High);
	Print(a, k);

	cout << "Min = " << Min(a, k) << endl;
	cout << "Max = " << Max(a, k) << endl;
	cout << "arithmetic mean = " << (Max(a, k) + Min(a, k)) / 2. << endl;

	return 0;
}
