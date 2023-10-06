#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int);
void XuatMang(float[], int);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void BienDoi(float[], int);

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	BienDoi(a, n);
	XuatMang(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void BienDoi(float a[], int n)
{
	float ln = LonNhat(a, n);
	float nn = NhoNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ln)
			a[i] = n;
		else
			if (a[i] == nn)
				a[i] = ln;
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
}