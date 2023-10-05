#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktHoanThien(int);
int HoanThienCuoi(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << HoanThienCuoi(arr, n);
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0)
			s += i;
	}
	if (s == k)
		return 1;
	return 0;
}

int HoanThienCuoi(int a[], int nn)
{
	for (int i = nn - 1; i >= 0; i--)
	{
		if (ktHoanThien(a[i]))
			return a[i];
	}
	return -1;
}