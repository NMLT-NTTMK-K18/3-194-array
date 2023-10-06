#include <iostream>
using namespace std;

void NhapMang(float[], int);
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);

int main()
{
	float a[1000];
	int n; cin >> n;
	cout << DuongNhoNhat(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
	return 0;
}

float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}