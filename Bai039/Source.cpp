#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ChusoDau(int);
int Tong(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "Tong cac gia tri co chu so dau chan: " << Tong(arr, n);
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

int ChusoDau(int nn)
{
	int dt = nn;
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}

int Tong(int a[], int n)
{
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ChusoDau(a[i]) % 2 == 0)
			s = s + a[i];
	return s;
}