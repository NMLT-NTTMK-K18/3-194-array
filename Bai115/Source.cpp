#include <iostream>
using namespace std;

void Nhap(float[], int&);
void GanNhat(float[], int, float&, float&);

int main()
{
	float arr[500];
	int n;
	float x, y;

	Nhap(arr, n);
	GanNhat(arr, n, x, y);
	cout << "(" << x << ", " << y << ")";
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

void GanNhat( float a[],int nn, float &xx, float &yy)
{
	xx = a[0];
	yy = a[1];
	for (int i = 0; i < nn - 1; i++)
	{
		for (int j = i + 1; j <= nn - 1; j++)
		{
			if (abs(a[i] - a[j]) < abs(xx - yy))
			{
				xx = a[i];
				yy = a[j];
			}
		}
	}
}