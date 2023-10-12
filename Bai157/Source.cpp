#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void DaoMang(int[], int);
void DaoChan(int[], int);
void DaoLe(int[], int);
void DaoChanLe(int[], int);

int main()
{
	int a[10000];
	int n;
	Nhap(a, n);
	DaoChanLe(a, n);
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

void DaoMang(int a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		int temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
    }
}

void DaoChan(int a[], int n)
{
	int b[100];
	int k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
		a[i] = b[k++];
}

void DaoLe(int a[], int n)
{
	int b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			a[i] = b[k++];
}

void DaoChanLe(int a[], int n)
{
	DaoChan(a, n);
	DaoLe(a, n);
	cout << "Mang duoc tao moi la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
}