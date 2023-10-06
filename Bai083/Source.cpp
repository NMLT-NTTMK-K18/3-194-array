#include <iostream>
using namespace std;

void NhapMang(int[], int);
int DauTien(int[], int, int, int);
int main()
{
	int n; cin >> n;
	int a[1000];
	int x; cin >> x;
	int y; cin >> y;
	NhapMang(a, n);
	cout << DauTien(a, n, x, y);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int DauTien(int a[], int n, int x, int y)
{ 
	for (int i = 0; i < n; i++)
		if (a[i] > x && a[i] < y)
			return a[i];
	return x;
}
