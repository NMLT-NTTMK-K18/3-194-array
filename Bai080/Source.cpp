#include <iostream>
using namespace std;

void Nhap(float[], int&);
float AmDau(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << AmDau(arr, n);
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

float AmDau(float a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		if (a[i] < 0)
			return a[i];
	}
	return 0;
}