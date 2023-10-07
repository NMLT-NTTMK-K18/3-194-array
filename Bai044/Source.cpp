#include <iostream>
using namespace std;
void Nhap(int[], int&);
int TongCucTieu(int[], int);
int TongCucDai(int[], int);
int Tong(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "Tong cac gia tri cuc tri: " << Tong(arr, n);
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

int TongCucTieu(int a[], int n)
{
	int s = 0;
	if (n <= 1)
		return 0;
	if (a[0] < a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i + 1] && a[i] < a[i - 1])
			s = s + a[i];
	if (a[n - 1] < a[n - 2])
		s = s + a[n - 1];
	return s;
}

int TongCucDai(int a[], int n)
{
	int s = 0;
	if (n <= 1)
		return 0;
	if (a[0] > a[1])
		s = s + a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i + 1] && a[i] > a[i - 1])
			s = s + a[i];
	if (a[n - 1] > a[n - 2])
		s = s + a[n - 1];
	return s;
}

int Tong(int a[], int n)
{
	int t = TongCucDai(a, n) + TongCucTieu(a, n);
	return t;
}
