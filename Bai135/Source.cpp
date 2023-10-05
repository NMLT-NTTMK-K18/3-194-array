#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void XayDung(float[], int, float[], int&);
void Xuat(float[], int);

int main()
{
	float arr1[500];
	float arr2[500];
	int n, k;

	Nhap(arr1, n);
	XayDung(arr1, n, arr2, k);
	Xuat(arr2, k);
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

void XayDung(float a[],int nn,float b[],int& kk)
{
	if (nn == 1)
	{
		kk = 1;
		b[0] = 0;
		return;
	}
	kk = nn;
	b[0] = a[1];
	for (int i = 1; i < nn - 1; i++)
		b[i] = a[i - 1] + a[i + 1];
	b[kk - 1] = a[nn - 2];
}

void Xuat(float b[], int kk)
{
	for (int i = 0; i < kk; i++)
	{
		cout << b[i] << setw(10);
	}
}