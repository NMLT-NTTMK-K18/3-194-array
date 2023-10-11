#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
void XayDung(int[], int, int[], int&);

int main()
{
	int n;
	int a[10000];
	int k;
	int b[10000];
	Nhap(a, n);
	cout << "Mang moi tao la: ";
	XayDung(a, n, b, k);
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

void XayDung(int a[], int n, int b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
		{
			b[k] = a[i];
			k++;
		}
	for (int i = 0; i<k; i++)
		cout << b[i] << setw(8);
}
