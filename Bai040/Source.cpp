#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TongCucTieu(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << TongCucTieu(arr, n);
	return 0;
}

void Nhap(float a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

float TongCucTieu(float a[], int nn)
{
	float s = 0;
	if (nn == 1)
		s += a[0];
	if (a[0] < a[1])
		s += a[0];
	for (int i = 1; i < nn - 1; i++)
	{
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s += a[i];
	}
	if (a[nn - 1] < a[nn - 2])
		s += a[nn - 1];
	return s;
}