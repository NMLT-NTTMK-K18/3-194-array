#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void Nhap(float[], int&);
float CuoiCung(float[], int);
int main()
{
	int n;
	float a[1000];
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
	cout << "\nChu so am cuoi cung lon hon gia tri -1 trong mang la: "<<CuoiCung(a,n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -1.0 + (rand() / (RAND_MAX / 2.0));
}

float CuoiCung(float a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0 && a[i]>-1)
		return a[i];
	return 0;
}
