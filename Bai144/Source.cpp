#include <iostream>
using namespace std;
void Nhap(int[], int&);
void Hoanvi(int&, int&);
void LeTang(int[], int);
void ChanTang(int[], int);
void ChanTangLeTang(int[], int);
void Xuat(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	Xuat(arr, n);
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

void Hoanvi(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void LeTang(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
				Hoanvi(a[i], a[j]);
}

void ChanTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
				Hoanvi(a[i], a[j]);
}

void ChanTangLeTang(int a[], int n)
{
	LeTang(a, n);
	ChanTang(a, n);
}

void Xuat(int a[], int n)
{
	ChanTangLeTang(a, n);
	cout << "Sau sap xep: \n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i]<<endl;
}