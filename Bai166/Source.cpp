#include <iostream>
using namespace std;

void Nhap(float[], int &);
void Xuat(float[], int);
void XoaViTri(float[], int &, int &);
void XoaTrungX(float[], int &, float);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	XoaTrungX(array, n, x);

	cout << "Mang xoa phan tu trung voi " << x << ":" << endl;
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

void XoaViTri(float a[], int &n, int &k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
	k--;
}

void XoaTrungX(float a[], int &n, float x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			XoaViTri(a, n, i);
}