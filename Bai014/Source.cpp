#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool Kiemtra(int);
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

bool Kiemtra(int n)
{
	for (int i = 0; (i * i) <= n; i++)
		if (i * i == n)
			return true;
	return false;
}

void Lietke(int a[], int n)
{
	cout << "Vi tri cua so chinh phuong: ";
	for (int i = 0; i <= n - 1; i++)
		if (Kiemtra(a[i]))
			cout << setw(6) << i;
}