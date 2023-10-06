#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int); 
void XuatMang(int[], int);

void HoanVi(int&, int&);
void SapGiam(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	SapGiam(a, n);
	XuatMang(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void SapGiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] < a[j])
				HoanVi(a[i], a[j]);
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(8);
}

