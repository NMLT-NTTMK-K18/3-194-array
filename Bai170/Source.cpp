#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&);
void Xuat(float[], int);
void ThemBaoToan(float[], int&, float);

int main()
{
	float arr[500];
	int n;
	float x;

	Nhap(arr, n, x);
	ThemBaoToan(arr, n, x);
	Xuat(arr, n);
	return 0;
}

void Nhap(float a[], int& nn, float& xx)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> xx;
}

void Xuat(float a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		cout << a[i] << setw(10);
	}
}\

void ThemBaoToan(float a[], int& nn, float xx)
{
	int i = nn - 1;
	while (i >= 0 && a[i] > xx)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = xx;
	nn++;
}