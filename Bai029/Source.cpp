#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int ChanDau(int[], int);
int ChanMax(int[], int);
void Lietke(int[], int);


int main()
{
	int n;
	int arr[100];

	Nhap(arr, n);
	Lietke(arr, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int ChanDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}

int ChanMax(int a[], int n)
{
	int lc = ChanDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc && a[i] % 2 == 0)
			lc = a[i];
	return lc;
}

void Lietke(int a[], int n)
{
	int dd = ChanMax(a, n);
	cout << "Vi tri chan lon nhat: ";
	if (dd == -1)
	{
		cout << "Khong co gia tri chan";
		return;
	}
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == dd)
			cout << setw(5) << i;
}