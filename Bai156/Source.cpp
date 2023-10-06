#include <iostream>
using namespace std;

void Nhap(float[], int &);
void Xuat(float[], int);
void DaoMang(float[], int);
void DaoDuong(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);

	DaoDuong(array, n);

	cout << "Mang dao vi tri so duong:" << endl;
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

void DaoMang(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		float temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
}

void DaoDuong(float a[], int n)
{
	float b[100];
	int k;
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			b[k++] = a[i];
	DaoMang(b, k);
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			a[i] = b[k++];
}