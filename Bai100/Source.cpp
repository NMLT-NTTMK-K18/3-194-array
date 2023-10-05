#include <iostream>
using namespace std;

void Nhap(float[], int&);
float AmDau(float[], int);
float AmLonNhat(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << AmLonNhat(arr, n);
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

float AmLonNhat(float a[], int nn)
{
	float lc = AmDau(a, nn);
	if (lc == 0)
		return 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] < 0 && a[i] > lc)
			lc = a[i];
	}
	return lc;
}