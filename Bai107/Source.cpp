#include <iostream>
#include <iomanip>
using namespace std;

int TanSuat(int[], int, int);
int TimGiaTri(int[], int);
void Nhap(int a[], int& n);

int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	cout << "Mang la: ";
	for (int i = 0; i < n; i++)
		cout  << a[i] << setw(8);
	cout << "\nSo nguyen xuat hien nhieu nhat trong mang la: " << TimGiaTri(a, n);
	
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
		dem++;
	return dem;
}

int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	return lc;
}