#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int);
void XayDung(float[], int, float[], int&);
void XuatMang(float[], int);

int main()
{
	float a[1000]; float b[1000];
	int n; cin >> n;
	int k;
	NhapMang(a, n);
	XayDung(a, n, b, k);
	XuatMang(b, k);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void XayDung(float a[], int n, float b[], int& k)
{
	k = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			b[k++] = a[i];
}

void XuatMang(float b[], int k)
{
	for (int i = 0; i < k; i++)
		cout << b[i]<<setw(4);
}

