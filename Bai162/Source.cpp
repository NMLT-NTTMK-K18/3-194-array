#include <iostream>
#include <iomanip>

using namespace std;

void Nhap(int[], int&);
void XoaViTri(int[], int&, int);
void XoaChan(int[], int&);


int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	XoaChan(a, n);
	cout << "Mang moi la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaChan(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0)
		XoaViTri(a, n, i);
}
