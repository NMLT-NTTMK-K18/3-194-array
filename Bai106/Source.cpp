#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int[], int &);
bool ktDang5m(int);
int DauTien(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "So lon nhat co dang 5^m: " << TimGiaTri(array, n);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktDang5m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = false;
		t /= 5;
	}
	return flag;
}

int DauTien(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) != 0)
			return a[i];
	return 0;
}

int TimGiaTri(int a[], int n)
{
	int lc = DauTien(a, n);
	if (lc == 0)
		return 0;
	for (int i = 0; i < n; i++)
		if (ktDang5m(a[i]) == 1 && a[i] > lc)
			lc = a[i];
	return lc;
}