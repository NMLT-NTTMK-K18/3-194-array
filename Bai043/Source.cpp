#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int);
float TongCucDai(float[], int );
 

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << TongCucDai(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float TongCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	float s = 0;
	if (a[0] > a[1])
		s += a[0];
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			s += a[i];
	if (a[n - 1] > a[n - 2])
		s += a[n - 1];
	return s;
}