#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int);
void XuatMang(float[], int);
void XoaViTri(float[], int&, int);
void XoaTrung(float[], int&, float);
void XoaPhanTu(float[], int&);

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	XoaPhanTu(a, n);
	XuatMang(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaTrung(float a[], int& n, float x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			XoaViTri(a, n, i);
}

int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void XoaPhanTu(float a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (TanSuat(a, n, a[i]) > 1)
			XoaTrung(a, n, a[i]);
}

void XuatMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
}

