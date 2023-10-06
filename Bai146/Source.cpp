#include <iostream>
using namespace std;

void Nhap(int[], int &);
void Xuat(int[], int);
void Tron(int[], int, int[], int, int[], int &);

int main()
{
	int array1[100], array2[100];
	int n, m;

	cout << "NHAP ARRAY THU 1:" << endl;
	Nhap(array1, n);

	cout << "NHAP ARRAY THU 2:" << endl;
	Nhap(array2, m);

	int array3[200];
	int p;

	Tron(array1, n, array2, m, array3, p);

	cout << "ARRAY DA DUOC TRON VA XEP THEO THU TU TANG DAN:" << endl;
	Xuat(array3, p);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap array[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "array[" << i << "]: " << a[i] << endl;
}

void Tron(int a[], int n, int b[], int m,
		  int c[], int &p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j < m && a[i] < b[j]) || (j >= m))
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}