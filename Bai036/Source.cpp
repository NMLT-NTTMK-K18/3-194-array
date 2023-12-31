#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int &);
bool ktChinhPhuong(int);
int TongChinhPhuong(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);
	cout << "Tong chinh phuong: " << TongChinhPhuong(array, n);

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

bool ktChinhPhuong(int n)
{
	for (int i = 1; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

int TongChinhPhuong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktChinhPhuong(a[i]))
			s += a[i];
	return s;
}