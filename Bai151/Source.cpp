#include <iostream>
using namespace std;

void Nhap(int[], int &);
void Xuat(int[], int);
void DuaVeDau(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	DuaVeDau(array, n);

	cout << "Mang co so chia het cho 3 o dau:" << endl;
	Xuat(array, n);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "array[" << i << "]: " << a[i] << endl;
}

void DuaVeDau(int a[], int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 3 == 0)
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt++;
		}
}