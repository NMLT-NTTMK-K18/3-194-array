#include <iostream>
using namespace std;

void Nhap(float[], int&);
float TongDuong(float[], int);
int DemDuong(float[], int);
float TrungBinhCong(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << TrungBinhCong(arr, n);
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

float TongDuong(float a[], int nn)
{
	float s = 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] > 0)
			s = s + a[i];
	}
	return s;
}

int DemDuong(float a[], int nn)
{
	int dem = 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] > 0)
			dem++;
	}
	return dem;
}

float TrungBinhCong(float a[], int nn)
{
	float s = TongDuong(a, nn);
	int dem = DemDuong(a, nn);
	if (dem == 0)
		return 0;
	return s / dem;
}