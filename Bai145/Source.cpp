#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void HoanVi(float&, float&);
void DuongTang(float[], int);
void AmGiam(float[], int);
void DuongTangAmGiam(float[], int);
void Xuat(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	DuongTangAmGiam(arr, n);
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

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void DuongTang(float a[], int nn)
{
	for (int i = 0; i < nn - 1; i++)
	{
		for (int j = i + 1; j < nn; j++)
		{
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void AmGiam(float a[], int nn)
{
	for (int i = 0; i < nn - 1; i++)
	{
		for (int j = i + 1; j < nn; j++)
		{
			if (a[i] < 0 && a[j] < 0 && a[i] < a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void DuongTangAmGiam(float a[], int nn)
{
	DuongTang(a, nn);
	AmGiam(a, nn);
}

void Xuat(float a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		cout << a[i] << setw(10);
	}
}