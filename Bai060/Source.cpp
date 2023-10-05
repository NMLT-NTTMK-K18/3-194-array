#include <iostream>
using namespace std;

void Nhap(float[], int&);
int DemGiaTri(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << DemGiaTri(arr, n);
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

int DemGiaTri(float a[], int nn)
{
	if (nn <= 1)
		return 0;
	int dem = 0;
	if (a[0] * a[1] < 0)
		dem++;
	for (int i = 1; i < nn - 1; i++)
	{
		if ((a[i] * a[i - 1] < 0) || (a[i] * a[i + 1] < 0))
			dem++;
	}
	if (a[nn - 1] * a[nn - 2] < 0)
		dem++;
	return dem;
}