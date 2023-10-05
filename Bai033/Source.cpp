#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int );
float Tong(float[], int);

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << Tong(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s += a[i];
	return s;
}
