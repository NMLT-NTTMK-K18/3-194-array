#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void DaoMang(int[], int);
void DaoChan(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	DaoChan(arr, n);
	Xuat(arr, n);
	return 0;
}

void Nhap(int a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		cout << a[i] << setw(10);
	}
}

void DaoMang(int a[], int nn)
{
	int d = 0;
	int c = nn - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}

void DaoChan(int a[], int nn)
{
	int b[100];
	int k;
	k = 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] % 2 == 0)
			b[k++] = a[i];
	}
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] % 2 == 0)
			a[i] = b[k++];
	}
}