#include <iostream>
using namespace std;
void Nhap(float[], int&);
void DichPhai(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	DichPhai(arr, n);
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

void DichPhai(float a[], int n)
{
	float temp = a[n - 1];
	for (int i = n - 1; i >= 1; i--)
		a[i] = a[i - 1];
	a[0] = temp;
	cout << "Sau khi dich phai cac phan tu: \n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
}