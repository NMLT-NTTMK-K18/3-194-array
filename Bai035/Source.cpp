#include <iostream>
using namespace std;

void Nhap(int[], int&);
int HangChuc(int);
int TongGiaTri(int[], int);
void Xuat(int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << TongGiaTri(arr, n);
	return 0;
}

void Nhap(int a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int HangChuc(int nn)
{
	int t = abs(nn);
	return (t / 10) % 10;
}

int TongGiaTri(int a[], int nn)
{
	int s = 0;
	for (int i = 0; i < nn; i++)
	{
		if (HangChuc(a[i]) == 5)
			s += a[i];
	}
	return s;
}