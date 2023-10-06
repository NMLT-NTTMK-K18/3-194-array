#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int);
void XuatMang(float[], int);
void DichTrai(float[], int);

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	DichTrai(a, n);
	XuatMang(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void DichTrai(float a[], int n)
{
	float temp = a[0];
	for (int i = 0; i <= n - 2; i++)
		a[i] = a[i + 1];
	a[n - 1] = temp;
}

void XuatMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
}