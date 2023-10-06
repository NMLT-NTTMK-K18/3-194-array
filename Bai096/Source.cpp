#include <iostream>
using namespace std;

void Nhap(int[], int &);
int ViTriDau(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Vi tri dau tien chan: " << ViTriDau(array, n);

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

int ViTriDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return i;
	return -1;
}