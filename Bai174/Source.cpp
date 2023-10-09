#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&, int&);
void XuatCon(int[], int, int&, int l);
void XuatCacMangCon(int[], int, int);

int main()
{
	int arr[100];
	int n;
	int l;

	Nhap(arr, n, l);
	XuatCacMangCon(arr, n, l);
	return 0;
}

void Nhap(int a[], int& n, int& l)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Nhap do dai mang con: ";
	cin >> l;
}

void XuatCon(int a[], int n, int& vt, int l)
{
	for (int i = 0; i < l; i++)
		cout << setw(5) << a[vt + i];
}

void XuatCacMangCon(int a[], int n, int l)
{
	for (int vt = 0; vt <= n - l; vt++)
	{
		cout << endl;
		XuatCon(a, n, vt, l);
	}
}