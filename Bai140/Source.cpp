#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
void HoanVi(int&, int&);
void NguyenToTang(int[], int);
void Xuat(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	NguyenToTang(arr, n);
	Xuat(arr, n);
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
	for(int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if(dem == 2)
		return 1;
	return 0;
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void NguyenToTang(int a[], int nn)
{
	for (int i = 0; i < nn - 1; i++)
	{
		for (int j = i + 1; j < nn; j++)
		{
			if (ktNguyenTo(a[i]) && ktNguyenTo(a[j]) && a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
	}
}

void Xuat(int a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		cout << a[i] << setw(10);
	}
}