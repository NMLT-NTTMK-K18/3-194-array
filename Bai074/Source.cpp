#include <iostream>
using namespace std;
void Nhap(float[], int&);
int Vitri(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	cout << "Vi tri cua so nho nhat: " << Vitri(arr, n);
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
	int lc = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;
}