#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
void Lietke(float[], int);


int main()
{
	int n;
	float arr[100];

	Nhap(arr, n);
	Lietke(arr, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void Lietke(float a[], int n)
{
	if (n == 1)
		return;
	if (a[0] * a[1] < 0)
		cout << a[0] << setw(4);
	for (int i = 1; i <= n - 2; i++)
		if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0)
			cout << setw(4) << a[i];
	if (a[n - 2] * a[n - 1] < 0)
		cout << setw(4) << a[n - 1];
}