#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void ThemViTri(int[], int&, int, int);
void ThemKhong(int[], int&);

int main()
{
	int b[100];
	int k;

	Nhap(b, k);
	cout << "\nMang ban dau:";
	Xuat(b, k);
	
	ThemKhong(b, k);
	cout << "\nMang sau khi bien doi:";
	Xuat(b, k);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (200 + 1) - 100;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void ThemViTri(int a[], int& n, int vt, int x)
{
	for (int i = n - 1; i >= vt; i--)
		a[i + 1] = a[i];
		a[vt] = x;
		n++;
}

void ThemKhong(int a[], int& n)
{
	for (int i = 0; i <= n - 1; i++)

		if (a[i] % 2 != 0)
			ThemViTri(a, n, i + 1, 0);
}