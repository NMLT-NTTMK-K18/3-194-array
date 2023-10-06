#include <iostream>
using namespace std;

void NhapMang(int[], int);
int ChanDau(int[], int);
int ChanNhoNhat(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << ChanNhoNhat(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ChanDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[1] % 2 == 0)
			return a[i];
	return -1;
}

int ChanNhoNhat(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0 && a[i] < lc)
			lc = a[i];
	return lc;
}