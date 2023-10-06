#include <iostream>
using namespace std;

void Nhap(float[], int &);
float DauTien(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);

	cout << "Chu so dau tien lon hon 2003 la: " << DauTien(array, n);

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

float DauTien(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 2003)
		{
			float lc = a[i];
			return lc;
		}
	return 0;
}