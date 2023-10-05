#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float[], int &);
int DemGiaTri(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);
	cout << "So luong gia tri lon hon tri tuyet doi cua gia tri lien sau no va cung dau: " << DemGiaTri(array, n);

	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemGiaTri(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	for (int i = 1; i <= n - 1; i++)
		if ((a[i] * a[i - 1] > 0) &&
			(abs(a[i]) > abs(a[i - 1])))
			;
	dem++;
	return dem;
}