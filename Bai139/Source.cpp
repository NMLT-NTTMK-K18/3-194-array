#include <iostream>
using namespace std;
void Nhap(int[], int&);
void Hoanvi(int&, int&);
void VitriLeTang(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	VitriLeTang(arr, n);
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

void Hoanvi(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}
 
void VitriLeTang(int a[], int n)
{
	for (int i = 0; i <= n-2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (i % 2 != 0 && j % 2 != 0 && a[i] > a[j])
				Hoanvi(a[i], a[j]);
	cout << "Sau sap xep: ";
	for (int i = 0; i <= n - 1; i++)
		cout << "a[" << i << "] = " << a[i] << "\n";
}

