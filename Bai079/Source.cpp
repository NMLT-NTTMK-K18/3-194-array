#include <iostream>
using namespace std;
void Nhap(float[], int&);
float DuongDau(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	cout << "Gia tri duong dau tien cua mang la: " << DuongDau(arr, n);
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

float DuongDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			return a[i];
	return 0;
}