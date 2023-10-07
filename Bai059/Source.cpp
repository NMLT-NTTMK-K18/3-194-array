#include <iostream>
using namespace std;
void Nhap(int[], int&);
int DemGiaTri(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "So luong cac phan tu ke nhau ma cung chan: " << DemGiaTri(arr, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] % 2 == 0)
			if (a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0)
				dem++;
	}
	if (a[n - 2] % 2 == 0 && a[n - 1] % 2 == 0)
		dem++;
	return dem;
}