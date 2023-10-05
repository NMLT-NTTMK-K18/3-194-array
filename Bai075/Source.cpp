#include <iostream>
using namespace std;

void Nhap(float[], int&, float&);
float XaNhat(float[], int, float);

int main()
{
	float arr[500];
	int n;
	float x;

	Nhap(arr, n, x);
	cout << XaNhat(arr, n, x);
	return 0;
}

void Nhap(float a[], int& nn, float& xx)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap x: ";
	cin >> xx;
}

float XaNhat(float a[], int nn, float xx)
{
	float lc = a[0];
	for (int i = 0; i < nn; i++)
	{
		if (abs(a[i] - xx) > abs(lc - xx))
			lc = a[i];
	}
	return lc;
}