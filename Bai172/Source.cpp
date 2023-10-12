#include <iostream>
#include <iomanip>

using namespace std;

void NhapTang(float[], int&);

int main()
{
	float a[100000];
	int n;
	NhapTang(a, n);
	return 0;
}

void NhapTang(float a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
		float x = a[i];
		int j;
		for (j = i - 1; j >= 0 && a[j] > x; j--)
			a[j + 1] = a[j];
		cout << j;
		a[j + 1] = x;
	}
	cout << "Mang duoc sap xep lai la: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8)<<setprecision(2);
}