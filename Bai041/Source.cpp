#include <iostream>
using namespace std;

void Nhap(float[], int &);
float TongGiaTri(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);
	cout << "Tong gia tri: " << TongGiaTri(array, n);

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

float TongGiaTri(float a[], int n)
{
	float s = 0;
	for (int i = 1; i < n; i++)
		if (a[i] > a[i - 1])
			s = s + a[i];
	return s;
}