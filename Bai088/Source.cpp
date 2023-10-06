#include <iostream>
using namespace std;

void NhapMang(int[], int);
bool KtChinhPhuong(int);
int ChinhPhuongDau(int[], int);

int main()
{
	int n; cin >> n;
	int a[1000];
	NhapMang(a, n);
	cout <<ChinhPhuongDau(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool KtChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int ChinhPhuongDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (KtChinhPhuong(a[i]))
			return a[i];
	return -1;
}