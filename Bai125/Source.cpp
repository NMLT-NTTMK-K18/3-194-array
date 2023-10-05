#include <iostream>
using namespace std;

void Nhap(float[], int&);
int ktTang(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << ktTang(arr, n);
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

int ktTang(float a[], int nn)
{
	int flag = 1;
	for (int i = 0; i < nn - 1; i++)
			if (a[i] > a[i + 1])
		flag = 0;
	return flag;
}