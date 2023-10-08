#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void LietKe(float[], int);
void Nhap(float[], int&);

int main()
{
	int n;
	float a[100000];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}


void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			cout << i<<setw(5);
}
