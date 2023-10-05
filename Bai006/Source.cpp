#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int &);
void Xuat(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);
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
	cout << n << endl;
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(2) << fixed << a[i];
}
