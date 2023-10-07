#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
int Vitri(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	cout << "Vi tri co 2 gia tri lan can va bang tich 2 vi tri lan can la:  " << Vitri(arr, n);
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

int Vitri(float a[], int n)
{
	for (int i = 1; i <= n - 2; i++)
		if (a[i] == a[i + 1] * a[i - 1])
			return i;
	return -1;
}
