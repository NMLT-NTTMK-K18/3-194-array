#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int);
int ChuSoDau(int);
int TongGiaTri(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << TongGiaTri(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ChuSoDau(int a[], int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int TongGiaTri(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (ChuSoDau(a[i]) & 1)
			s += a[i];
	}
	return s;
}