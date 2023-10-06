#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int KiemTra(int);
void Lietke(int[], int);

int main()
{
	int n;
	int arr[100];

	Nhap(arr, n);
	Lietke(arr, n);
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

int KiemTra(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}

void Lietke(int a[], int n)
{
	cout << "Cac phan tu co chu so dau tien la chan la: ";
	for (int i = 0; i <= n - 1; i++) 
		if (KiemTra(a[i]) % 2 == 0)
			cout << setw(6) << a[i];
}