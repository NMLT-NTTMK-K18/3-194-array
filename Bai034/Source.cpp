#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int&);
int Tong(float[], int);


int main()
{
	int n;
	float arr[100];

	Nhap(arr, n);
	cout << "Tong cac gia tri duong: " << Tong(arr, n);
	
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

int Tong(float a[], int n)
{
	float s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			s = s + a[i];
	return s;
}