#include <iostream>
using namespace std;

void Nhap(float[], int &);
void Xuat(float[], int);
void XoaViTri(float[], int &, int);
void XoaAm(float[], int &);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);

	XoaAm(array, n);

	cout << "Mang xoa so am:" << endl;
	Xuat(array, n);

	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "array[" << i << "]: " << a[i] << endl;
}

void XoaViTri(float a[], int &n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaAm(float a[], int &n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] < 0)
			XoaViTri(a, n, i);
}