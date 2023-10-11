#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float a[], int& n);
void HoanVi(float&, float&);
void DuongTang(float[], int);

int main()
{
	int n;
	float a[10000];
	Nhap(a, n);
	DuongTang(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void DuongTang(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i] > 0 && a[j] > 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
	cout << "Mang moi la: ";
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(9);
	
}