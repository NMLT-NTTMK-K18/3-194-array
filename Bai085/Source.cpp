#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ChanCuoi(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << ChanCuoi(arr, n);
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

int ChanCuoi(int a[], int nn)
{
	for (int i = nn - 1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}