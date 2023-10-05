#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
int DemNguyenTo(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << DemNguyenTo(arr, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return 1;
	else 
		return 0;
}

int DemNguyenTo(int a[], int nn)
{
	int dem = 0;
	for (int i = 0; i < nn; i++)
	{
		if (ktNguyenTo(a[i]))
			dem++;
	}
	return dem;
}