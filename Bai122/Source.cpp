#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
int ktToanChan(int[], int);

int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	if (ktToanChan(a, n) == 1)
		cout << "Mang toan chan";
	else
		cout << "Mang khong toan chan";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int ktToanChan(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			return 0;
	return 1;
}