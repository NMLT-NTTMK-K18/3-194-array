#include <iostream>
using namespace std;
void Nhap(float[], int&);
int AmDau(float[], int);
int VitriAmMax(float[], int);


int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	cout << "Vi tri gia tri duong nho nhat: " << VitriAmMax(arr, n);
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

int AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return i;
	return -1;
}

int VitriAmMax(float a[], int n)
{
	int lc = AmDau(a, n);
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > a[lc] && a[i] < 0)
			lc = i;
	return lc;
}
