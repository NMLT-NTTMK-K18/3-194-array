#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void Xuat(float[], int);
void XoaViTri(float[], int&, int);
float LonNhat(float[], int);
void XoaLonNhat(float[], int&);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	XoaLonNhat(arr, n);
	Xuat(arr, n);
	return 0;
}

void Nhap(float a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
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

float LonNhat(float a[], int nn)
{
	int lc = a[0];
	for (int i = 0; i < nn; i++)
	{
		if (a[i] > lc)
			lc = a[i];
	}
	return lc;
}

void XoaLonNhat(float a[], int& nn)
{
	float ln = LonNhat(a, nn);
	for (int i = nn - 1; i >= 0; i--)
		if (a[i] == ln)
			XoaViTri(a, nn, i);
}