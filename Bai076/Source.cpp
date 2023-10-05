#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[], int &);
int TimViTri(float[], int, float);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Vi tri gan x nhat: " << TimViTri(array, n, x);

	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TimViTri(float a[], int n, float x)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i] - x) < abs(a[lc] - x))
			lc = i;
	return lc;
}