#include <iostream>
using namespace std;
void Nhap(float[], int&);
void DaoMang(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	DaoMang(arr, n);
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

void DaoMang(float a[], int n)
{
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		float temp = a[d];
		a[d] = a[c];
		a[c] = temp;
		d++;
		c--;
	}
	cout << "Sau dao mang: \n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
}