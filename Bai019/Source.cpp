#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
bool Kiemtra(float[]);
void Lietke(float[], int);


int main()
{
	int n;
	float arr[100];

	Nhap(arr, n);
	Lietke(arr, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int Kiemtra(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}

void Lietke(float a[], int n)
{
	float lc = Kiemtra(a, n);
	cout << "Vi tri cac phan tu nho nhat la: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == lc)
			cout << setw(5) << i;
}