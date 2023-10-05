#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);

int main()
{
	float arr[500];
	int n;
	int k;

	Nhap(arr, n, k);
	XoaViTri(arr, n, k);
	Xuat(arr, n);
	return 0;
}

void Nhap(float a[], int& nn, int& kk)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap k: ";
	cin >> kk;
}

void Xuat(float a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		cout << a[i] << setw(10);
	}
}

void XoaViTri(float a[], int& nn, int k)
{
	for (int i = k; i < nn - 1; i++)
		a[i] = a[i + 1];
	nn--;
}