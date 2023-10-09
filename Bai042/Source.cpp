#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
float TongGiaTri(float[], int);

int main()
{
	float a[100000];
	int n;
	Nhap (a, n);
	cout << "s = " << TongGiaTri(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / ((RAND_MAX) / (100.0 - (-100.0))));
}

float TongGiaTri(float a[], int n)
{
	float s = 0;
	cout << "Tong cac gia tri lon hon tri tuyet doi cua gia tri dung lien sau no trong mang la: ";
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			s = s + a[i];
	return s;
}