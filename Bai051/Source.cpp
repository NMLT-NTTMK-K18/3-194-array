#include <iostream>
using namespace std;

void Nhap(int[], int &);

int DemGiaTri(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);
	cout << "So luong gia tri duong va chia het cho 7: " << DemGiaTri(array, n);

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

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] % 7 == 0)
			dem++;
	return dem;
}