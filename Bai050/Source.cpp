#include <iostream>
using namespace std;

void Nhap(int[], int&);
int DemChan(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << DemChan(arr, n);
	return 0;
}

void Nhap(int a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemChan(int a[], int nn)
{
	int dem = 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] % 2 == 0)
			dem++;
	}
	return dem;
}