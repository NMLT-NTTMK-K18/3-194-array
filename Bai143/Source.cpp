#include <iostream>
using namespace std;

void NhapMang(int[], int);
void SapTang(int[], int);
int ktHoanVi(int[], int, int[], int);

int main()
{
	int n, m; cin >> n >> m;
	int a[1000]; int b[1000];
	NhapMang(a, n);
	NhapMang(b, m);
	SapTang(a, n);
	SapTang(b, n);
	cout << ktHoanVi(a, n, b, m);
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

void SapTang(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
}

int ktHoanVi(int a[], int n, int b[], int m)
{
	if (m != 0)
		return 0;
	SapTang(a, n);
	SapTang(b, n);

	int flag = 1;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i])
			flag = 0;
	return flag;
}